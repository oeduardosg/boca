#include <stdio.h>

int main () {
	int n=0;
	scanf("%d", &n);
	n = n % 2;
	if (n) {
		printf("Impar");
	} else {
		printf("Par");
	}
return 0;
}
