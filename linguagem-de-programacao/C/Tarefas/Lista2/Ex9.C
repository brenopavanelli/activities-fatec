#include <stdio.h>
#include "entrada-saida.c"

int main() { 
    
    int vetor[5], num;

    coletar_vetor(vetor,5);

    for (int i=0;i<5-1;i++) {
        for (int j=0;j<5-i-1;j++) {
            if (vetor[j] < vetor[j+1]) {
                num = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = num; 
            }
        }
    }

    exibir_vetor(vetor, 5);
    return 0;
}