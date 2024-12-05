#include <stdio.h>

#define NUM_ALUNOS 5

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

void inserirDados(Aluno alunos[], int tamanho);
void exibirDados(Aluno alunos[], int tamanho);
void encontrarMaiorNota(Aluno alunos[], int tamanho);

int main() {
    Aluno alunos[NUM_ALUNOS];
    inserirDados(alunos, NUM_ALUNOS);
    exibirDados(alunos, NUM_ALUNOS);
    encontrarMaiorNota(alunos, NUM_ALUNOS);
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

void exibirDados(Aluno alunos[], int tamanho) {
    printf("\nDados dos alunos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Nome: %s, Idade: %d, Nota: %.2f\n", alunos[i].nome, alunos[i].idade, alunos[i].nota);
    }
}

void encontrarMaiorNota(Aluno alunos[], int tamanho) {
    int indiceMaior = 0;
    for (int i = 1; i < tamanho; i++) {
        if (alunos[i].nota > alunos[indiceMaior].nota) {
            indiceMaior = i;
        }
    }
    printf("\nAluno com a maior nota:\n");
    printf("Nome: %s, Nota: %.2f\n", alunos[indiceMaior].nome, alunos[indiceMaior].nota);
}
