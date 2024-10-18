#include <stdio.h>
#include "entrada-saida.c"

int main() {
    int matriz1[2][2], matriz2[2][2], matrizMultiplicada[2][2];
    coletar_matriz(2,2,matriz1);
    coletar_matriz(2,2,matriz2);

    matrizMultiplicada[0][0] = (matriz1[0][0]*matriz2[0][0]) + (matriz1[0][1]*matriz2[1][0]);
    matrizMultiplicada[0][1] = (matriz1[0][0]*matriz2[0][1]) + (matriz1[0][1]*matriz2[1][1]);
    matrizMultiplicada[1][0] = (matriz1[1][0]*matriz2[0][0]) + (matriz1[1][1]*matriz2[1][0]);
    matrizMultiplicada[1][1] = (matriz1[1][0]*matriz2[0][1]) + (matriz1[1][1]*matriz2[1][1]);

    for (int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            printf("%d ", matrizMultiplicada[i][j]);
        }
        
    }

}