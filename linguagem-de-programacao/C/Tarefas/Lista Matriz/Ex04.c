#include <stdio.h>
#include "entrada-saida.c"

int main() {
    int linha, coluna;
    int minimo, maximo;

    scanf("%d", &linha);
    scanf("%d", &coluna);

    int matriz[linha][coluna];
    coletar_matriz(linha,coluna,matriz);

    for (int i=0;i<linha;i++) {
        for(int j=0;j<linha;j++) {
            if (i==0&&j==0) {
                minimo = maximo = matriz[i][j];
            }
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
            }
            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
            }
        }
        
    }

    printf("Elemento minimo: %d \n", minimo);
    printf("Elemento maximo: %d", maximo);
}