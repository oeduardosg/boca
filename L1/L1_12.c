#include <stdio.h>

int main () {
	int N1=0, N2=0, N3=0;
	scanf("%d %d %d", &N1, &N2, &N3);
	if (N1 <= N2) {
		if (N2 <= N3) {
			printf("N1 = %d, N2 = %d, N3 = %d", N1, N2, N3);
		} else {
			if (N1 <= N3) {
				printf("N1 = %d, N3 = %d, N2 = %d", N1, N3, N2);
			} else { 
				printf("N3 = %d, N1 = %d, N2 = %d", N3, N1, N2);
	}}} else {
		if (N2 <= N3) {
			if (N1 <= N3) {
				printf("N2 = %d, N1 = %d, N3 = %d", N2, N1, N3);
			} else { 
				printf("N2 = %d, N3 = %d, N1 = %d", N2, N3, N1);
		}} else {
			printf("N3 = %d, N2 = %d, N1 = %d", N3, N2, N1);
		}}
return 0;
}
