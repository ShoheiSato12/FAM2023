set terminal png
set output "Benzene.png"
set key font "Verdana, 15"

set xrange [4.2:6.2]
set xtics font "Verdana, 15"
set xlabel 'Energy (eV)' font "Verdana, 20"
set ytics 0,0.002,0.008 nomirror tc lt 16  font "Verdana,15"
set ylabel 'Absortion' tc lt 16 font "Verdana, 20"
set yrange [0:0.008]
set format y '%.0sx10^%S'; set y2tics 0,0.000000002,0.000000006 nomirror tc lt 23 font "Verdana,15"
set y2range [0:0.000000006]
set format y2 '%.0sx10^%S'; set y2label 'Emission' tc lt 23 font "Verdana, 20"
plot "cross_section.lx" w l lw 2.5 lt 16 title "Absortion", "differential_rate.lx" w l lw 2.5 lt 23 axes x1y2 title "Emission"  

# set terminal jpeg
# set output 'graph.jpg'

# set xrange [-10:10]
# set ytics 10 nomirror tc lt 1
# set ylabel '2*x' tc lt 1
# set y2tics 20 nomirror tc lt 2
# set y2label '4*x' tc lt 2
# plot 2*x linetype 1, 4*x linetype 2 axes x1y2