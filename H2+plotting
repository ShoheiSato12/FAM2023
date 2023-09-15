set terminal gif animate delay 10
R=1
set output 'H2+1.gif'
do for [i=-100:100]
{
  func1(x,y)=1/sqrt(pi)*exp(sqrt((x-R/2)**2 +y**2 +i**2))
  func2(x,y)= 1/sqrt(pi)*exp(sqrt((x+R/2)**2 +y**2 +i**2))
  res1(x,y)=func1(x,y)+func2(x,y)

  splot '++' res1(x,y) with pm3d
}
set output 'H2+2.gif'
do for [i=-100:100]
{
  func1(x,y)=1/sqrt(pi)*exp(sqrt((x-R/2)**2 +y**2 +i**2))
  func2(x,y)= 1/sqrt(pi)*exp(sqrt((x+R/2)**2 +y**2 +i**2))
  res2(x,y)=func1(x,y)-func2(x,y)

  splot '++' res2(x,y) with pm3d
}

squareres1(x,y)=res1(x,y)**2
squareres2(x,y)=res2(x,y)**2
