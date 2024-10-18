#include <stdio.h>
#include "entrada-saida.c"

int main() {
    int matriz[3][3];

    coletar_matriz(3,3,matriz);

    for (int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if (i==0||j==0||i==2||j==2) {
                printf("%d", matriz[i][j]);
            } else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}