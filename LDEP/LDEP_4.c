#include <stdio.h>

int main() {
  int i=0, div=1, qtd=0, cont=0;

  scanf("%d", &qtd);

  for(i=2; i <= qtd; i++){
  	while(div <= i){
      		if (i % div == 0){
        		cont++;
      }
      div++;
    }
    if(cont==2) {
      printf("%d ", i);
      }
      cont = 0;
      div = 1;
  }
  return 0;
  }
