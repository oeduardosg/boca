#include <stdio.h>

int main () {
	int numP=0, itens=0, ultimo=0;
	scanf("%d %d", &numP, &itens);
	ultimo = itens % numP;
	if (ultimo) {
		printf("RESP:%d", ultimo);
	} else {
		printf("RESP:%d", numP);
	}
return 0;
}
