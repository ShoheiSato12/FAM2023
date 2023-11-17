#!/bin/gnuplot
set terminal svg 
set output "vai.svg" 
set title "Tudo errado. Faz de novo- by Pedro H."
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
set xlabel "it's in Bohr radius"
set ylabel "it's in Hartree"
#fit f(x) "parabo.dat" u ($2*2):3 via a,b,c

plot "test.dat" u ($2*2):3 w lp, f(x),\
om0 title sprintf("%.3f",om0),\
om1 title sprintf("%.3f",om1),\
om2 title sprintf("%.3f",om2),\
om3 title sprintf("%.3f",om3),\
om4 title sprintf("%.3f",om4)
