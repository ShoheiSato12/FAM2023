#include"../Include/WaveFunction.hpp"

double Psi(double x, double y, double z)
{
    double a =1/M_1_PI;
    double result = a * exp(-(pow(x, 2) + pow(y, 2) + pow(z, 2)));
    return result;
}
double ligante(double R, double f1, double f2)
{
    double s = exp(-R) * (1 + R + pow(R, 2) / 3);
    double a = sqrt(1 / 1 + s);
    double result = a * (f1 + f2);
    return result;
}
double antiligante(double R, double f1, double f2)
{
    double s = exp(-R) * (1 + R + pow(R, 2) / 3);
    double a = sqrt(1 / 1 - s);
    double result = a * (f1 - f2);
    return result;
}

double ProbDensity(double x)
{
    return pow(x, 2);
}

double Energy_ligante(long double R)
{
    long double J = exp((-2) * R) * (1 + 1 / R) ;
    long double K = exp(-R) * (1 / R - (2 / 3) * R);
    long double S = exp(-R) * (1 + R + pow(R, 2) / 3);
    long double result = -0.5 + (J + K) / (1 + S);
    return result;
}
double Energy_antiligante(long double R)
{
    long double J = exp((-2) * R) * (1 + 1 / R);
    long double K = exp(-R) * (1 / R - (2 / 3) * R);
    long double S = exp(-R) * (1 + R + pow(R, 2) / 3);
    long double result = -0.5 + (J - K) / (1 - S);
    return result;

}
void ProbDensityinR_ligante()
{
    std::vector<double> x, y, z, value;
    std::ifstream doc("ProbLigante.dat");
    std::ofstream out("Prob_Rligante.dat");
    double auxiliar=0;
    double incremento = 0.01;
    double aux1, aux2, aux3, aux4;
    double probab;
    while (doc >> aux1 >> aux2 >> aux3 >> aux4)
    {
        x.push_back(aux1);
        y.push_back(aux2);
        z.push_back(aux3);
        value.push_back(aux4);
    }
    for (double R = 0.01; R < 4.5;R+=incremento)
    {
        for (int i = 0; i < value.size(); i++)
        {
            if (sqrt(pow(x[i], 2) + pow(y[i], 2) + pow(z[i], 2)) < R)
            {
                auxiliar += value[i];
            }
            else
            {
                probab = 1 - auxiliar * incremento;
                out << R << "\t" << probab << "\n";
                break;
            }
        }
    }
}
void ProbDensityinR_antiligante()
{
    std::vector<double> x, y, z, value;
    std::ifstream doc("ProbAntiligante.dat");
    std::ofstream out("Prob_Rantiligante.dat");
    double auxiliar=0;
    double incremento = 0.01;
    double aux1, aux2, aux3, aux4;
    double probab;
    while (doc >> aux1 >> aux2 >> aux3 >> aux4)
    {
        x.push_back(aux1);
        y.push_back(aux2);
        z.push_back(aux3);
        value.push_back(aux4);
    }
    for (double R = 0.01; R < 4.5;R+=incremento)
    {
        for (int i = 0; i < value.size(); i++)
        {
            if (sqrt(pow(x[i], 2) + pow(y[i], 2) + pow(z[i], 2)) < R)
            {
                auxiliar += value[i];
            }
            else
            {
                probab = 1 - auxiliar * incremento;
                out << R << "\t" << probab << "\n";
                break;
            }
        }
    }

}