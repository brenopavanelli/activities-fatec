#include <stdio.h>
#include <string.h>

#define ALUNOS 5
#define NOME 50

void bubbleSort(char nomes[ALUNOS][NOME]) {
    for (int i = 0; i < ALUNOS - 1; i++) {
        for (int j = 0; j < ALUNOS - 1 - i; j++) {
            if (strcmp(nomes[j], nomes[j + 1]) > 0) {
                char temp[NOME];
                strcpy(temp, nomes[j]);
                strcpy(nomes[j], nomes[j + 1]);
                strcpy(nomes[j + 1], temp);
            }
        }
    }
}

int main() {
    char nomes[ALUNOS][NOME]; 

    for (int i = 0; i < ALUNOS; i++) {
        scanf("%s", nomes[i]);
    }

    bubbleSort(nomes);

    
    printf("Lista de nomes ordenados: ");
    for (int i = 0; i < ALUNOS; i++) {
        printf("%s ", nomes[i]); // Exibe o nome
    }

    return 0;
}
