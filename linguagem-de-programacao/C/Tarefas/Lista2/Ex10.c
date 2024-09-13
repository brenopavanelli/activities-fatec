#include <stdio.h>
#include "entrada-saida.c"

int main() {
    
    int vetor[8];
    int soma = 0;

    coletar_vetor(vetor, 8);

    printf("Soma: ");
    for (int i=0;i<8;i++) {
        if (i==0) {
            soma = vetor[i];
        } else {
            soma = vetor[i-1] + vetor[i];
        }
        printf("%d ", soma);
    }
    
    return 0;
}