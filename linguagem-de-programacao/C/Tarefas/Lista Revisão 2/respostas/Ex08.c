#include <stdio.h>

#define TAMANHO 3

int compararMatrizes(int matriz1[TAMANHO][TAMANHO], int matriz2[TAMANHO][TAMANHO]);

int main() {
    int matriz1[TAMANHO][TAMANHO], matriz2[TAMANHO][TAMANHO];

    printf("Digite os elementos da primeira matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    if (compararMatrizes(matriz1, matriz2)) {
        printf("As matrizes são iguais.\n");
    } else {
        printf("As matrizes são diferentes.\n");
    }

    return 0;
}

int compararMatrizes(int matriz1[TAMANHO][TAMANHO], int matriz2[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (matriz1[i][j] != matriz2[i][j]) {
                return 0; // Matrizes diferentes
            }
        }
    }
    return 1; // Matrizes iguais
}
