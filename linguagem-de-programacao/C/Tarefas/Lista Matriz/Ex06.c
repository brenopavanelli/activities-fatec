#include <stdio.h>

int main() {
    int linha, coluna;
    int contador=0;

    scanf("%d", &linha);
    scanf("%d", &coluna);

    int matriz1[linha][coluna];
    int matriz2[linha][coluna];

    for (int i=0;i<linha;i++) {
        for (int j=0;j<coluna;j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (int i=0;i<linha;i++) {
        for (int j=0;j<coluna;j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    for (int i=0;i<linha;i++) {
        for (int j=0;j<coluna;j++) {
            if (matriz1[i][j]==matriz2[i][j]) contador++;
        }
    }

    if (contador==linha*coluna) printf("As matrizes sao identicas.");
    
    return 0;
}