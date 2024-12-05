#include <stdio.h>

#define ANDARES 3
#define APARTAMENTOS 4

void inicializarPortas(int portas[ANDARES][APARTAMENTOS]);
void alterarEstadoPortas(int portas[ANDARES][APARTAMENTOS]);
void exibirEstadoPortas(int portas[ANDARES][APARTAMENTOS]);

int main() {
    int portas[ANDARES][APARTAMENTOS];
    inicializarPortas(portas);
    alterarEstadoPortas(portas);
    exibirEstadoPortas(portas);
    return 0;
}

void inicializarPortas(int portas[ANDARES][APARTAMENTOS]) {
    for (int i = 0; i < ANDARES; i++) {
        for (int j = 0; j < APARTAMENTOS; j++) {
            portas[i][j] = 0; // Todas as portas começam fechadas
        }
    }
}

void alterarEstadoPortas(int portas[ANDARES][APARTAMENTOS]) {
    for (int i = 0; i < ANDARES; i++) {
        for (int j = 0; j < APARTAMENTOS; j++) {
            if ((i * APARTAMENTOS + j + 1) % 2 == 0) { // Porta em número par
                portas[i][j] = 1; // Abre a porta
            }
        }
    }
}

void exibirEstadoPortas(int portas[ANDARES][APARTAMENTOS]) {
    printf("\nEstado final das portas (1: Aberta, 0: Fechada):\n");
    for (int i = 0; i < ANDARES; i++) {
        for (int j = 0; j < APARTAMENTOS; j++) {
            printf("%d ", portas[i][j]);
        }
        printf("\n");
    }
}
