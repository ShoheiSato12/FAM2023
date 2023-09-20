set terminal pngcairo size 700,524 enhanced font 'Verdana,10'
set output '../Outputs/png/energy.png'
set xrange [0:6]
set yrange [-1:2]
set samples 3000
plot '../Outputs/DAT/1EnerLigante.dat' with lines title "Energia ligante", '../Outputs/DAT/1EnerAntiligante.dat' with lines title "Energia antiligante"

