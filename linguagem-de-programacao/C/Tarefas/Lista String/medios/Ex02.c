#include <stdio.h>
#include <string.h>

#define TAMANHO 100 

int main() {
    char stringA[TAMANHO];  
    char stringB[TAMANHO];  

    scanf("%99s", stringA); 

    strcpy(stringB, stringA);

    printf("String copiada: %s ", stringB);

    return 0;
}
