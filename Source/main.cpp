#pragma once
#include"../Include/Functions.hpp"
#include"../Include/WaveFunction.hpp"

int main()
{
    double R=2;
    writeWaves(-5, 5, -5, 5, -5, 5, R, 100);
    writeProb(-5, 5, -5, 5, -5, 5, R, 100);
    writeEnergies(0, 7, 100);
    ProbDensityinR_antiligante();
    ProbDensityinR_ligante();
    printf("Terminei\n");
}