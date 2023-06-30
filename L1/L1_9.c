#include <stdio.h>

int main () {
	char l=0;
	scanf ("%c", &l);
	if ((l >= 97) && (l <= 122)) {
		l = (int)l - 32;
		printf ("%c(%d)", l, (int)l);
	} else { 
		if ((l >= 65) && (l <= 90)) {
			printf ("A letra deve ser minuscula!");
		} else {
			printf ("Nao e letra!");
		}
	}
return 0;
}
