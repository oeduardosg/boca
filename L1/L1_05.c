#include <stdio.h>

int main () {
  int N1=0, N2=0;
  scanf("%d %d", &N1, &N2);
  if (N1 == N2) {
    printf("N1 = N2");
  } else {
    if (N1 > N2)
      printf("N1 = %d", N1);
    else
      printf("N2 = %d", N2);
    }
  return 0;
}