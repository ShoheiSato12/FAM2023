set terminal pngcairo size 730,550 enhanced font 'Verdana,10'
set output '../Outputs/png/energy.png'
set xrange [0:7]
set yrange [-0.6:-0.35]
set samples 3000
set ylabel "Energia (Hartree)" font "Verdana,25"
set xlabel "Distâcia (Raio de Bohr)" font "Verdana,25"
set tics font "Verdana,15"
set title font "Verdana,15"
set key font "Verdana, 15"
set xtics offset 0,-0.1
set xlabel offset 0,-0.1
set ytics offset 0.5,0
set ylabel offset -0.5,-0.5
set lmargin 11
set xtics nomirror
set ytics nomirror


plot '../Outputs/DAT/1EnerLigante.dat' with lines title "Energia ligante", '../Outputs/DAT/1EnerAntiligante.dat' with lines title "Energia antiligante"

