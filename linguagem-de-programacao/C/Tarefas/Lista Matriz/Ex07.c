#include <stdio.h>

int main() {
    int linha, coluna;
    int contador=0;

    scanf("%d", &linha);
    scanf("%d", &coluna);

    int matriz[linha][coluna];

    if (linha!=coluna) {
        printf("A matriz deve ser quadrada.");
        return 0;
    }

    for (int i=0;i<linha;i++) {
        for (int j=0;j<coluna;j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    // coletar_matriz(linha,coluna,matriz)

    
    for (int i=0;i<linha;i++) {
        for (int j=0;j<coluna;j++) {
            if (matriz[i][j] == matriz[j][i]) contador++;
        }
    }

    if (contador==linha*coluna) printf("A matriz e simetrica.");
    
    return 0;
}