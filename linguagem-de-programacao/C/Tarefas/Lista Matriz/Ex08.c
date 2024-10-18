#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha, coluna, acertos = 0;
    int matriz[5][5] = {0}; 

    for (int i=0;i<2;i++) {
        scanf("%d", &linha);
        scanf("%d", &coluna);
        
        if (linha>5||coluna>5||linha<0||coluna<0) return 0;
        
        matriz[linha][coluna] = 1;
    }

    while (acertos < 2) {
        scanf("%d", &linha);
        scanf("%d", &coluna);

        if (linha < 0 || linha > 4 || coluna < 0 || coluna > 4) return 0;

        if (matriz[linha][coluna] == 0) matriz[linha][coluna] = -1; 
        if (matriz[linha][coluna] == 1) {
            matriz[linha][coluna] = 2; 
            acertos++;
        }

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (matriz[i][j] == 0) printf("- ");
                else if (matriz[i][j] == -1) printf("O ");
                else if (matriz[i][j] == 1) printf("- "); // Exibe B para barcos, pode ser removido após o jogo
                else if (matriz[i][j] == 2) printf("X "); // Exibe X para acertos
            }
            printf("\n");
        }
    }
    
    return 0;
}