#pragma once
#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
#include<fstream>
#include<vector>
#include<string>

double Psi(double x, double y, double z);
double ligante(double R, double f1, double f2);
double antiligante(double R, double f1, double f2);
double ProbDensity(double x);
double Energy_ligante(long double R);
double Energy_antiligante(long double R);
void ProbDensityinR_ligante();
void ProbDensityinR_antiligante();
