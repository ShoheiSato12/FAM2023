#!/bin/gnuplot
set terminal svg 
set output "vai.svg" 
set xtics font "Verdana,15"
set ytics font "Verdana,15"
f(x)=a*((x-b)**2) +c
a               = 0.230148  #       +/- 0.006152     (2.673%)
b               = 1.48632   #       +/- 0.002721     (0.1831%)
c               = -1.17587  #       +/- 0.0001082    (0.009204%)
aux =4456.1683*2*pi/2e8
mass=1840
bo=41573.7556
om=2*pi*137/bo
om0=om/2+c
om1=om0+om
om2=om1+om
om3=om2+om
om4=om3+om
#a=mass*(aux**2)/4
#b=1
#c=-1.18
#a=1
set yrange [-1.2:-0.9]
set xrange [1:6]
set xlabel "Distance (Bohr radius)" font "Verdana, 20"
set ylabel "Energy (Hartree)" font "Verdana, 20"
#fit f(x) "parabo.dat" u ($2*2):3 via a,b,c

plot "test.dat" u ($2*2):3 w lp title "Simulation", f(x) title "Harmonic aproximation",\
om0 title "n=0",\
om1 title "n=1",\
om2 title "n=2",\
om3 title "n=3",\
om4 title "n=4"
# om0 title sprintf("n=0%.2f",om0),\
# om1 title sprintf("n=1%.2f",om1),\
# om2 title sprintf("n=2%.2f",om2),\
# om3 title sprintf("n=3%.2f",om3),\
# om4 title sprintf("n=4%.2f",om4)
