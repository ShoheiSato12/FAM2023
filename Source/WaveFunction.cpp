#include"../Include/WaveFunction.hpp"

double Psi(double x, double y, double z)
{
    double a =1/M_1_PI;
    double result = a * exp((-pow(x, 2) + pow(y, 2) + pow(z, 2)));
    return result;
}
double ligante(double s, double f1, double f2)
{
    double a = sqrt(1 / 1 + s);
    double result = a * (f1 + f2);
    return result;
}
double antiligante(double s, double f1, double f2)
{
    double a = sqrt(1 / 1 - s);
    double result = a * (f1 - f2);
    return result;
}

double ProbDensity(double x)
{
    return pow(x, 2);
}