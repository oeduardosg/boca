#include <stdio.h>

int main() {
  float a=0, b=0, c=0, d=0, per=0;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  scanf("%f", &d);
  per = ((c - a)*2) + ((d - b)*2);
  printf("%.2f", per);
  return 0;
}