#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void calcularSomaLinhas(int matriz[LINHAS][COLUNAS], int soma[LINHAS]);

int main() {
    int matriz[LINHAS][COLUNAS];
    int somaLinhas[LINHAS];

    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    calcularSomaLinhas(matriz, somaLinhas);

    printf("Soma de cada linha:\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("Linha %d: %d\n", i + 1, somaLinhas[i]);
    }

    return 0;
}

void calcularSomaLinhas(int matriz[LINHAS][COLUNAS], int soma[LINHAS]) {
    for (int i = 0; i < LINHAS; i++) {
        soma[i] = 0;
        for (int j = 0; j < COLUNAS; j++) {
            soma[i] += matriz[i][j];
        }
    }
}
