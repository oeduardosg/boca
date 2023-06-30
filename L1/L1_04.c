#include <stdio.h>
#include <math.h>

int main () {
  float rMaior=0, rMenor=0, area=0;
  scanf("%f", &rMaior);
  area = 3.141592*(pow(rMaior, 2));
  rMenor = sqrt(area/(2*3.141592));
  printf("%.2f %.2f", area, rMenor);
  return 0;
}