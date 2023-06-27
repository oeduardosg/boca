#include <stdio.h>

int EhPar(int n) {
return !(n%2);
}

void OrdenaCrescente(int vet[], int qtd) {
    int i, j, aux;
    for(i = 0; i < qtd; i++) {
        for(j = i + 1; j < qtd; j++) {
            if(vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

void ImprimeDadosDoVetor(int vet[], int qtd) {
    int i;
    if(!qtd) {
        printf("{}");
    }
    else if(qtd == 1) {
        printf("{%d}", vet[0]);
    } 
    else {
        printf("{");
        for(i = 0; i < qtd - 1; i++) {
            printf("%d, ", vet[i]);
        }
        printf("%d}", vet[qtd - 1]);
    }
}

void scanArray(int * v, int q) {
    int i;
    for(i = 0; i < q; i++) {
        scanf("%d ", &v[i]);
    }
}

int main() {
    int qtd;
    scanf("%d ", &qtd);
    int vet[qtd];
    scanArray(vet, qtd);
    OrdenaCrescente(vet, qtd);
    ImprimeDadosDoVetor(vet, qtd);
return 0;
}