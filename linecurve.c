
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <time.h>
#include <math.h>

#define slope_func(m,x,b) (m*x+b)

int main(int argc, char *argv[]) {

  double slope = 3.0 / 2.0;
  double b = -4.0;

  double radius;
  double radians;

  long int num_points = 2000;

  long int n;

  double x,y;

  for (n = 0; n < num_points; n++) {
    x = n * 8.0 / num_points- 4.0;
    y = slope_func(slope,x,b);

    radians = y * M_PI;
    x *= cos(radians);
    y *= sin(radians);

    printf("%g %g\n", x, y);
  }

  return 0;

}
