#include <stdio.h>

int main(){
	
	int l=0, c=0, i=0, j=0, soma=0, atual=0, soma_total=0;

	scanf("%d %d", &l, &c);

	
	for (i = 0; i<l; i++){
		for(j = 0; j<c; j++){
			scanf("%d", &atual);
			soma = soma + atual;
		}
		printf("%d\n", soma);
		soma_total = soma_total + soma;
		soma = 0;
	}

	printf("%d\n", soma_total);

	return 0;
}
