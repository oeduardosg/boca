#include <stdio.h>

int main(int argc, char const *argv[]) {
    int a, i = 2;

    scanf("%d", &a);
    while(i < a) {
        if(i % 2 == 0) {
            printf("%d ", i);
        } else {
        	if (i % 3 == 0)
            		printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    return 0;
}
