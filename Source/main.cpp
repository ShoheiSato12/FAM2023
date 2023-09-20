#pragma once
#include"../Include/Functions.hpp"
#include"../Include/WaveFunction.hpp"

int main()
{
    double R=2;
    //writeWaves(-10, 10, -10, 10, -10, 10, R, 1000);
    //writeProb(-10, 10, -10, 10, -10, 10, R, 1000);
    writeEnergies(0, 7, 100);

    printf("Terminei\n");
}