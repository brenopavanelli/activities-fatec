#include <stdio.h>
#include "entrada-saida.c"

int main() {
    int vet[6];
    int x, k=0, cont=0;
    int resultante[6];
    
    coletar_vetor(vet, 6); 
    
    scanf("%d", &x); 

    for (int i=0;i<6;i++) {
        if (x!=vet[i]) {
            resultante[k] = vet[i];
            k++;
            cont++;
        }
    }
    
    printf("\n");
    exibir_vetor(vet, 6);
    printf("\n");
    exibir_vetor(resultante, cont);

    return 0;
}