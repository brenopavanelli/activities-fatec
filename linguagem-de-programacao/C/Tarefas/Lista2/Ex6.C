// Ex 6
#include <stdio.h>

int main() {

    int soma = 0; 
    int comprimento_do_vetor = 0;
    int vetor[9];

    for (int i=0;i<9;i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
        comprimento_do_vetor++;
    }

    printf("A Media: %d", soma / comprimento_do_vetor);
    
    return 0;
}
