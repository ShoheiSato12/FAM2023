set terminal pngcairo size 700,524 enhanced font 'Verdana,10'
set samples 3000
set output '../Outputs/png/ProbAntiligante.png'
plot '../Outputs/DAT/Prob_Rantiligante.dat' with lines title "Probabilidade de Energia antiligante"
set output '../Outputs/png/ProbLigante.png'
plot '../Outputs/DAT/Prob_Rligante.dat' with lines title "Probabilidade de Energia ligante"

