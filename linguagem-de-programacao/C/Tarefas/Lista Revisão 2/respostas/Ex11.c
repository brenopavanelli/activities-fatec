#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 5

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]);
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO], int posX, int posY);
void jogar(int tabuleiro[TAMANHO][TAMANHO]);

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    inicializarTabuleiro(tabuleiro);
    jogar(tabuleiro);
    return 0;
}

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    srand(time(NULL));
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = rand() % 3; // Valores: 0, 1 ou 2
        }
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO], int posX, int posY) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (i == posX && j == posY) {
                printf("J ");
            } else {
                printf("%d ", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }
}

void jogar(int tabuleiro[TAMANHO][TAMANHO]) {
    int pontos = 0;
    int posX = 0, posY = 0;
    char movimento;

    while (pontos < 5) {
        exibirTabuleiro(tabuleiro, posX, posY);
        printf("Pontos: %d\n", pontos);
        printf("Movimento (w/a/s/d para cima/esquerda/baixo/direita, q para sair): ");
        scanf(" %c", &movimento);

        if (movimento == 'q') break;

        switch (movimento) {
            case 'w': if (posX > 0) posX--; break;
            case 's': if (posX < TAMANHO - 1) posX++; break;
            case 'a': if (posY > 0) posY--; break;
            case 'd': if (posY < TAMANHO - 1) posY++; break;
            default: printf("Movimento invalido!\n"); continue;
        }

        if (tabuleiro[posX][posY] == 1) {
            pontos++;
            tabuleiro[posX][posY] = 0; // Item coletado
        } else if (tabuleiro[posX][posY] == 2) {
            pontos--;
        }
    }

    printf("Fim de jogo! Pontos finais: %d\n", pontos);
}
