set terminal png
set output "average.png"
set key font ",20"
set key 
set xtics font "Verdana,15"
set ytics font "Verdana,15"
set mytics 2
set grid mytics
set grid y

set yrange [1.32:1.48]
set ytics 1.32, 0.04, 1.48
set xtics 2, 4 , 20
plot "average.dat" u 1:2 w lp pt 7 ps 1.5 title "simple bond" , "average.dat" u 1:3 w lp pt 7 ps 1.5 title "double bond" 

set output "1-average.png"
set yrange [0.68:0.76]
set ytics 0.68, 0.02,0.76
set xtics 0.05, 0.1, 0.5
plot "1-average.dat" u (1/$1):2 w lp pt 7 ps 1.5 title "simple bond" , "1-average.dat" u (1/$1):3 w lp pt 7 ps 1.5 title "double bond" 

set output "minimum.png"
set yrange [1.32:1.48]
set ytics 1.32, 0.04, 1.48
set xtics 2, 4 , 20
#set yrange [0:10]

plot "minimum.dat" u 1:2 w lp pt 7 ps 1.5 title "simple bond" , "minimum.dat" u 1:3 w lp pt 7 ps 1.5 title "double bond" 

set output "1-minimum.png"
set yrange [0.68:0.76]
set ytics 0.68, 0.02,0.76
set ytics 
set xtics
plot "1-minimum.dat" u (1/$1):2 w lp pt 7 ps 1.5 title "simple bond" , "1-minimum.dat" u (1/$1):3 w lp pt 7 ps 1.5 title "double bond" 

