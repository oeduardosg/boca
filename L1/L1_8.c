#include <stdio.h>

int main () {
	char v=0;
	scanf("%c", &v);
	if ((v == 'a') || (v == 'e') || (v == 'i') || (v == 'o') || (v == 'u') || (v == 'A') || (v == 'E') || (v == 'I') || (v == 'O') || (v == 'U')) {
		printf ("Vogal");
	} else { 
		printf ("Nao Vogal");
	}
return 0;
}
