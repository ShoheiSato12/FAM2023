#pragma once
#include"../Include/Functions.hpp"
#include"../Include/WaveFunction.hpp"

int main()
{
    double R=2;
    //writeWaves(-5, 5, -5, 5, -5, 5, R, 1000);
    //writeProb(-5, 5, -5, 5, -5, 5, R, 1000);
    writeEnergies(0, 7, 100);

    printf("Terminei\n");
}