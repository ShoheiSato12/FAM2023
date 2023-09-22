#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"WaveFunction.hpp"

void writeWaves(double Xinit, double Xfin, double Yinit, double Yfin, double Zinit, double Zfin, double R, int subdivision);
void writeProb(double Xinit, double Xfin, double Yinit, double Yfin, double Zinit, double Zfin, double R, int subdivision);
void writeEnergies(double Rinit, double Rfin, int subdivision);
void plotEnergy();
void animate();
double minimumvalue();
