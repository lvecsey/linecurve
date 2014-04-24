
set terminal pngcairo size 2550,3300 enhanced font 'Verdana,10'
set output 'portrait.png'
plot 'points.dat' with line

set terminal svg size 2550,3300 fname 'Verdana' fsize 10
set output 'portrait.svg'
plot 'points.dat' with line