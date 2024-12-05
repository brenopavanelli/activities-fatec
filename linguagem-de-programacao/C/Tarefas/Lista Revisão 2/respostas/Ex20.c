#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

void salvarCSV(Aluno dados[], int tamanho, char *nomeArquivo);

int main() {
    Aluno alunos[] = {
        {"João", 20, 8.5},
        {"Maria", 22, 9.0},
        {"Pedro", 21, 7.5}
    };
    int tamanho = sizeof(alunos) / sizeof(alunos[0]);
    char nomeArquivo[] = "alunos.csv";

    salvarCSV(alunos, tamanho, nomeArquivo);

    printf("Dados salvos no arquivo %s\n", nomeArquivo);
    return 0;
}

void salvarCSV(Aluno dados[], int tamanho, char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "Nome,Idade,Nota\n");
    for (int i = 0; i < tamanho; i++) {
        fprintf(arquivo, "%s,%d,%.2f\n", dados[i].nome, dados[i].idade, dados[i].nota);
    }

    fclose(arquivo);
}
