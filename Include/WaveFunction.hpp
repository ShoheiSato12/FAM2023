#pragma once
#define _USE_MATH_DEFINES
#include<cmath>
#include<vector>
#include<string>

double Psi(double x, double y, double z);
double ligante(double R, double f1, double f2);
double antiligante(double R, double f1, double f2);
double ProbDensity(double x);
double Energy_ligante(double R);
double Energy_antiligante(double R);
double ProbDensityinR_ligante(double R);
double ProbDensityinR_antiligante(double R);
