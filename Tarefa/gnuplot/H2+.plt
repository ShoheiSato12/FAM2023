set terminal gif animate delay 1
set output '../Ouputs/gif/New H2+ligante.gif'

set xrange [-25:25]
set yrange [-25:25]
set zrange [0:1]
set palette defined (0 "blue", 0.000005 "orange", 0.001 "red")
set cbrange [0:0.001]

stats "../Outputs/DAT/Ligante.dat" name "A"
