#include <stdio.h>

int main () {
    float x=0,y=0;
    int z=0;
    scanf("%f", &x);
    y = x - (int)x;
    z = x - y;
    printf("INTEIRO:%d,REAL:%0.2f",z,y);
  return 0;
}