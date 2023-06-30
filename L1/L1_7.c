#include <stdio.h>

int main () {
  float t=0, tc=0;
  char ut='a';
  scanf("%f", &t);
  scanf(" %c", &ut);
    if ((ut == 'C') || (ut == 'c')) {
    tc = (t*1.8)+32;
    printf("%.2f (F)", tc);
    } else {
      tc = (t-32)/1.8;
      printf("%.2f (C)", tc);
    }
  return 0; 
}