#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 2

int numeroDeAlunos = 0;

typedef struct {
    char nome[50];
    int idade;
    int nota;
} Aluno;

void limparBuffer();
void criarAluno();
void exibirAlunos();
Aluno alunoMaiorNota();
void exibirAlunoMaiorNota();

int main() {
    Aluno alunos[MAX_ALUNOS];

    for(int i; i < MAX_ALUNOS; i++) {
        criarAluno(alunos, i);
    }

    exibirAlunos(alunos, numeroDeAlunos);

    exibirAlunoMaiorNota(alunos);
    

    return 0;
}

// Auxiliar
void limparBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Funções principais
void criarAluno(Aluno alunos[], int i) {
    fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
    alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

    scanf("%d", &alunos[i].idade);
    
    scanf("%d", &alunos[i].nota);
    limparBuffer();

    numeroDeAlunos++;
}

void exibirAlunos(Aluno alunos[]) {
    printf("Lista de Alunos: \n");
    for (int i; i < numeroDeAlunos; i++) {
        printf("Aluno %d: %s, Idade: %d, Nota: %d\n", i+1, alunos[i].nome, alunos[i].idade, alunos[i].nota);
    }
}

Aluno alunoMaiorNota(Aluno alunos[], int numeroDeAlunos) {
    Aluno melhorAluno = alunos[0];
    for (int i = 1; i < numeroDeAlunos; i++) {
        if (alunos[i].nota > melhorAluno.nota) {
            melhorAluno = alunos[i];
        }
    }
    return melhorAluno;
}

void exibirAlunoMaiorNota(Aluno alunos[]) {
    Aluno alunoNotaMaisAlta = alunoMaiorNota(alunos, numeroDeAlunos);
    printf("O aluno %s, com idade %d, tem a maior nota: %d\n", alunoNotaMaisAlta.nome, alunoNotaMaisAlta.idade, alunoNotaMaisAlta.nota);
}
    

