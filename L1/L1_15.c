#include <stdio.h>

int main() {
  int n=0, ordem=0;
  scanf("%d %d", &n, &ordem);

  switch (ordem) {
    case 1: 
    if (!(n%2)) {
      printf("PAR");
    } else {
      printf("IMPAR");
    }
      break;
    case 2: 
    n = n/10;
    if (!(n%2)) {
      printf("PAR");
    } else {
      printf("IMPAR");
    } 
      break;
    case 3:
    n = n/100;
    if (!(n%2)) {
      printf("PAR");
    } else {
      printf("IMPAR");
    }
      break;
  }
  return 0;
}