#include <stdio.h>
#include <math.h>

int main () {
		int num1=0, num2=0;
		float ans=0;
		scanf("%d", &num1);
		scanf("%d", &num2);
		ans = (sqrt((float)num1)) + (sqrt((float)num2));
		printf("%0.2f\n", ans);
	return 0;
}
