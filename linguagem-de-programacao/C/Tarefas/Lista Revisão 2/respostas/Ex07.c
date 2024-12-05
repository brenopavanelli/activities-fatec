#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 3

void ordenarMatriz(int matriz[TAMANHO][TAMANHO]);

int main() {
    int matriz[TAMANHO][TAMANHO];

    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    ordenarMatriz(matriz);

    printf("Matriz ordenada:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void ordenarMatriz(int matriz[TAMANHO][TAMANHO]) {
    int temp[TAMANHO * TAMANHO];
    int k = 0;

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            temp[k++] = matriz[i][j];
        }
    }

    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (temp[i] > temp[j]) {
                int aux = temp[i];
                temp[i] = temp[j];
                temp[j] = aux;
            }
        }
    }

    k = 0;
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            matriz[i][j] = temp[k++];
        }
    }
}
