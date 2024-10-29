#include <stdio.h>
#include <string.h>

#define TAMANHO 50

int main() {
    char stringA[TAMANHO];
    char stringB[TAMANHO];

    scanf("%s", stringA);
    scanf("%s", stringB);
    
    printf("String concatenada: %s ", strcat(stringA, stringB));
    
    return 0;
}