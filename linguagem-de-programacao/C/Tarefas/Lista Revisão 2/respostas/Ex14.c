#include <stdio.h>

#define TAMANHO 3

int verificarSimetria(int matriz[TAMANHO][TAMANHO]);

int main() {
    int matriz[TAMANHO][TAMANHO];

    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (verificarSimetria(matriz)) {
        printf("A matriz é simétrica.\n");
    } else {
        printf("A matriz não é simétrica.\n");
    }

    return 0;
}

int verificarSimetria(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}
