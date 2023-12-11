#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

// Function to extract and return optimized distances between the i and i+1 atoms
std::vector<double> extractDistances(const std::string& fileName, int numAtoms) {
    std::cout << "Attempting to open file: " << fileName << std::endl;
    
    // Open the Gaussian 16 log file
    std::ifstream inputFile(fileName);

    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open the file " << fileName << ".\n";
        return {};
    }

    std::string line;
    bool inOptimizedSection = false;
    std::vector<double> distances;

    // Read the file line by line
    while (std::getline(inputFile, line)) {
        // Check for the start of the optimized parameters section
        if (line.find("Optimized Parameters") != std::string::npos) {
            inOptimizedSection = true;
            continue;
        }

        // Check for the end of the optimized parameters section
        if (inOptimizedSection && line.empty()) {
            inOptimizedSection = false;
            continue;
        }

        // Process lines within the optimized parameters section
        if (inOptimizedSection) {
            // Look for lines containing optimized distances (R(1,2), R(2,3), etc.)
            for (int i = 1; i < numAtoms; ++i) {
                if (line.find("R(" + std::to_string(i) + "," + std::to_string(i + 1) + ")") != std::string::npos) {
                    std::istringstream iss(line);
                    double distance;
                    std::string token;

                    // Parse the line to extract the distance value
                    while (iss >> token) {
                        if (std::sscanf(token.c_str(), "R(%*d,%*d)=%lf", &distance) == 1) {
                            distances.push_back(distance);
                            break;
                        }
                    }
                }
            }
        }
    }

    // Close the file
    inputFile.close();

    return distances;
}

int main() {
    // Iterate through files named 1.log, 2.log, ..., 20.log
    for (int i = 1; i <= 20; ++i) {
        int numAtoms = 2 * i;
        std::vector<double> distances = extractDistances(std::to_string(i) + ".log", numAtoms);

        if (!distances.empty()) {
            std::cout << "File: " << i << ".log, Optimized distances between atoms " << i << " and " << i + 1 << ":\n";
            for (size_t j = 0; j < distances.size(); ++j) {
                std::cout << "Distance " << j + 1 << ": " << distances[j] << " Angstroms\n";
            }
        } else {
            std::cout << "Error extracting distances from file: " << i << ".log\n";
        }
    }

    return 0;
}
