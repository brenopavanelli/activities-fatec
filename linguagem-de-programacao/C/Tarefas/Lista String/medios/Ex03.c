#include <stdio.h>
#include <string.h>

#define ALUNOS 5
#define TAMANHO_NOME 50

int main() {
    char nomes[ALUNOS][TAMANHO_NOME];

    for (int i = 0; i < ALUNOS; i++) {
        scanf("%s", nomes[i]); 
    }

    printf("Nomes em ordem inversa: ");
    for (int i = ALUNOS - 1; i >= 0; i--) {
        printf("%s ", nomes[i]); 
    }

    return 0;
}
