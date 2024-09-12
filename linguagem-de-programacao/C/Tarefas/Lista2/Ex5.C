// Ex 05
#include <stdio.h>

void exibir(int vetor[]) {
    for (int i = 0;i<6;i++) {
        printf("%d", vetor[i]);
    }    
}

int main() {

    int numeros[6];
    int numeros_inversos[6];
    
    for (int i = 0;i<6;i++) {
        scanf("%d", &numeros[i]); 
    }
    
    exibir(numeros);
    printf("\n");
    
    for (int i = 0;i<6;i++) {
        numeros_inversos[5-i] = numeros[i];
    }

    exibir(numeros_inversos);

    return 0;
}
