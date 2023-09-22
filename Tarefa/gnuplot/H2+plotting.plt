set terminal gif animate delay 1

R=12
S=0.2
set output 'H2+1.gif'
set xrange [-25:25]
set yrange [-25:25]
set zrange [0:1]
set palette defined (0 "blue", 0.000005 "orange", 0.001 "red")
set cbrange [0:0.001]
do for [i=-200:200]{
  k=i/20.0
  func1(x,y)=1/sqrt(pi)*exp(-sqrt((x-R/2)**2 +y**2 +(k)**2))
  func2(x,y)=1/sqrt(pi)*exp(-sqrt((x+R/2)**2 +y**2 +(k)**2))
  res1(x,y)=sqrt(1/(2*(1+S)))*(func1(x,y)+func2(x,y))
  set title sprintf("Section z=%.1f",k)
  splot  res1(x,y) with pm3d
}

set terminal gif animate delay 1
set output 'H2+2.gif'
R=12
S=0.2
set xrange [-25:25]
set yrange [-25:25]
set zrange [-1:1]
#set palette defined (-1 "blue", -0.001 "cyan", 0 "gray", 0.001 "orange", 1 "red")
set cbrange [-1:1]
do for [i=-200:200]{
  k=i/20.0
  func1(x,y)=1/sqrt(pi)*exp(-sqrt((x-R/2)**2 +y**2 +(k)**2))
  func2(x,y)=1/sqrt(pi)*exp(-sqrt((x+R/2)**2 +y**2 +(k)**2))
  res2(x,y)=sqrt(1/(2*(1-S)))*(func1(x,y)-func2(x,y))
  set title sprintf("Section z=%.1f",k)
  splot res2(x,y) with pm3d
}

set terminal gif animate delay 1
set output 'ProbH2+1.gif'
R=12
S=0.2
set xrange [-25:25]
set yrange [-25:25]
set zrange [0:0.01]
set cbrange [0:0.001]
set palette defined (0 "blue", 0.000005 "orange", 0.001 "red")

do for [i=0:500]{
  k=i/100.0
  func1(x,y)=1/sqrt(pi)*exp(-sqrt((x-R/2)**2 +y**2 +(k)**2))
  func2(x,y)=1/sqrt(pi)*exp(-sqrt((x+R/2)**2 +y**2 +(k)**2))
  res1(x,y)=sqrt(1/(2*(1+S)))*(func1(x,y)+func2(x,y))
  squareres1(x,y)=res1(x,y)**2
  set title sprintf("Section z=%.2f",k)
  splot  squareres1(x,y) with pm3d
}


set terminal gif animate delay 1
set output 'ProbH2+2.gif'
R=12
S=0.2
set xrange [-25:25]
set yrange [-25:25]
set zrange [0:0.01]
set palette defined (0 "blue", 0.000005 "orange", 0.001 "red")

do for [i=0:500]{
  k=i/100.0
  func1(x,y)=1/sqrt(pi)*exp(-sqrt((x-R/2)**2 +y**2 +(k)**2))
  func2(x,y)= 1/sqrt(pi)*exp(-sqrt((x+R/2)**2 +y**2 +(k)**2))
  res2(x,y)=sqrt(1/(2*(1-S)))*(func1(x,y)-func2(x,y))
  squareres2(x,y)=res2(x,y)**2
  set title sprintf("Section z=%.2f",k)
  splot  squareres2(x,y) with pm3d
}
