#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <vector>
#include <cmath>
int main() {
    // if (argc != 2) {
    //     std::cerr << "Usage: " << argv[0] << " <logFileName>" << std::endl;
    //     return 1;
    // }

    //const std::string logFileName = argv[1];
    std::string logFileName;
    
    // Define the regular expression pattern to match atom coordinates
    std::regex atomPattern(R"(\s*(\d+)\s+(\w+)\s+(-?\d+\.\d+)\s+(-?\d+\.\d+)\s+(-?\d+\.\d+))");

    // Open the Gaussian log file
    std::ifstream logFile(logFileName);
    if (!logFile.is_open()) {
        std::cerr << "Error: Unable to open the Gaussian log file." << std::endl;
        return 1;
    }

    std::vector<std::tuple<int, std::string, double, double, double>> atoms;

    // Read the log file line by line
    std::string line;
    while (std::getline(logFile, line)) {
        std::smatch match;
        if (std::regex_search(line, match, atomPattern)) {
            int atomNumber = std::stoi(match[1]);
            std::string atomSymbol = match[2];
            double x = std::stod(match[3]);
            double y = std::stod(match[4]);
            double z = std::stod(match[5]);
            atoms.emplace_back(atomNumber, atomSymbol, x, y, z);
        }
    }

    // Define the range of atom indices (inclusive)
    int startIndex = 1;  // Change this to the start index of the range
    int endIndex = 5;    // Change this to the end index of the range

    if (startIndex < 1 || endIndex < 1 || startIndex > atoms.size() || endIndex > atoms.size() || startIndex > endIndex) {
        std::cerr << "Error: Invalid atom index range selected." << std::endl;
        return 1;
    }

    // Calculate and print the distances between atoms in the selected range
    for (int i = startIndex; i <= endIndex; i++) {
        for (int j = i + 1; j <= endIndex; j++) {
            double deltaX = std::get<2>(atoms[i - 1]) - std::get<2>(atoms[j - 1]);
            double deltaY = std::get<3>(atoms[i - 1]) - std::get<3>(atoms[j - 1]);
            double deltaZ = std::get<4>(atoms[i - 1]) - std::get<4>(atoms[j - 1]);
            double distance = std::sqrt(deltaX * deltaX + deltaY * deltaY + deltaZ * deltaZ);
            std::cout << "Distance between atom " << i << " and atom " << j << ": " << distance << " Angstroms" << std::endl;
        }
    }

    // Close the log file
    logFile.close();

    return 0;
}
