#pragma once
#include"../Include/Functions.hpp"
#include"../Include/WaveFunction.hpp"

int main()
{

    writeWaves(-10, 10, -10, 10, -10, 10, 2, 1000);
    writeProb(-10, 10, -10, 10, -10, 10, 2, 1000);
    writeEnergies(-0, 12, 1000);
    printf("Terminei\n");
}