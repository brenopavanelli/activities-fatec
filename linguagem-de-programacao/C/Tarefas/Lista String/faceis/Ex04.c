#include <stdio.h>
#include <string.h>
#define TAMANHO 50

int compararString(int comprimento, char string1[comprimento], char string2[comprimento]) {
    return strcmp(string1, string2) == 0 ? 0 : 1;
}

int main() {
    char stringA[TAMANHO];
    char stringB[TAMANHO];


    scanf("%s", stringA);
    scanf("%s", stringB);


    printf("%d", compararString(TAMANHO, stringA, stringB));

    return 0;
}
