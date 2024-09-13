// Ex 05
#include <stdio.h>
#include "entrada-saida.c"

int main() {

    int numeros[6];
    int numeros_inversos[6];
    
    coletar_vetor(numeros, 6);
    exibir_vetor(numeros, 6);
    printf("\n");
    
    for (int i = 0;i<6;i++) {
        numeros_inversos[5-i] = numeros[i];
    }

    exibir_vetor(numeros_inversos, 6);

    return 0;
}
