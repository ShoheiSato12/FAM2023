set terminal pngcairo size 700,524 enhanced font 'Verdana,10'
set output '../Outputs/png/energy.png'
set xrange [0:4]
set yrange [-0.6:0.6]
set samples 3000
plot '../Outputs/DAT/2EnerLigante.dat' with lines title "Energia ligante", '../Outputs/DAT/2EnerAntiligante.dat' with lines title "Energia antiligante"

