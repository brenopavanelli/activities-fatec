#include <stdio.h> 

void coletar_vetor(int vetor[], int comprimento) {
    for (int i=0;i<comprimento;i++) {
        scanf("%d", &vetor[i]);
    }
}

void exibir_vetor(int vetor[],int comprimento) {
    for (int i = 0;i<comprimento;i++) {
        printf("%d", vetor[i]);
    }    
}