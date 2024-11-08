#include <stdio.h>

#define NUM_ALUNOS 3
#define NUM_NOTAS 3
#define MAX_NOME 100

struct Aluno {
    char nome[MAX_NOME];
    float notas[NUM_NOTAS];
};

void lerDadosAluno(struct Aluno *aluno, int indice) {
    
      
    fgets(aluno->nome, MAX_NOME, stdin);
    
    for (int i = 0; i < NUM_NOTAS; i++) {
        scanf("%f", &aluno->notas[i]);
    }
    getchar();
}

float calcularMedia(struct Aluno *aluno) {
    float soma = 0.0;
    for (int i = 0; i < NUM_NOTAS; i++) {
        soma += aluno->notas[i];
    }
    return soma / NUM_NOTAS;
}

void imprimirAluno(struct Aluno aluno, float media) {
    printf("Nome: %sMedia: %.2f\n", aluno.nome, media);
}

void lerDadosAlunos(struct Aluno alunos[], int num_alunos) {
    for (int i = 0; i < num_alunos; i++) {
        lerDadosAluno(&alunos[i], i + 1);
    }
}

void calcularEImprimirMedia(struct Aluno alunos[], int num_alunos) {
    for (int i = 0; i < num_alunos; i++) {
        float media = calcularMedia(&alunos[i]);
        imprimirAluno(alunos[i], media);
    }
}

int main() {
    struct Aluno alunos[NUM_ALUNOS];
    
    lerDadosAlunos(alunos, NUM_ALUNOS);
    
    calcularEImprimirMedia(alunos, NUM_ALUNOS);

    return 0;
}