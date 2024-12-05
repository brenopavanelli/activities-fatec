#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 5

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

void inserirDados(Aluno alunos[], int tamanho);
void exportarParaCSV(Aluno alunos[], int tamanho);

int main() {
    Aluno alunos[NUM_ALUNOS];
    inserirDados(alunos, NUM_ALUNOS);
    exportarParaCSV(alunos, NUM_ALUNOS);
    return 0;
}

void inserirDados(Aluno alunos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        getchar(); // Limpa o buffer
    }
}

void exportarParaCSV(Aluno alunos[], int tamanho) {
    char nomeArquivo[100];
    printf("Nome do arquivo CSV: ");
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    nomeArquivo[strcspn(nomeArquivo, "\n")] = '\0';

    FILE *arquivo = fopen(nomeArquivo, "w");
    if (!arquivo) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }

    fprintf(arquivo, "Nome,Idade,Nota\n");
    for (int i = 0; i < tamanho; i++) {
        fprintf(arquivo, "%s,%d,%.2f\n", alunos[i].nome, alunos[i].idade, alunos[i].nota);
    }

    fclose(arquivo);
    printf("Dados exportados para %s\n", nomeArquivo);
}
