#include <stdio.h>

#define LINHAS 3
#define COLUNAS 2

int main() {
    int matriz[LINHAS][COLUNAS];
    int transposta[COLUNAS][LINHAS];

    printf("Digite os elementos da matriz 3x2:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz transposta:\n");
    for (int i = 0; i < COLUNAS; i++) {
        for (int j = 0; j < LINHAS; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
