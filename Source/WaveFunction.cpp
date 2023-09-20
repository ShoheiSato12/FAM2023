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

double Energy_ligante(double R)
{
    double J = exp((-2) * R) * (1 + 1 / R) ;
    double K = exp(-R) * (1 / R - (2 / 3) * R);
    double S = exp(-R) * (1 + R + pow(R, 2) / 3);
    double result = -0.5 + (J + K) / (1 + S);
    return result;
}
double Energy_antiligante(double R)
{
    double J = exp((-2) * R) * (1 + 1 / R);
    double K = exp(-R) * (1 / R - (2 / 3) * R);
    double S = exp(-R) * (1 + R + pow(R, 2) / 3);
    double result = -0.5 + (J - K) / (1 - S);
    return result;

}
double ProbDensityinR_ligante(double R)
{
    int steps = 10/200;
    double Raio = 0.45;
    for (double aux = 0.01; aux < R; aux = aux + steps)
    {
        
    }
}
double ProbDensityinR_antiligante(double R)
{

}