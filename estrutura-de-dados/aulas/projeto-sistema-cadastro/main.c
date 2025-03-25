#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 3

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Aluno;

Aluno lerAluno() {
    Aluno a;
    printf("\nDigite o nome do aluno: ");
    scanf(" %49[^\n]", a.nome);
    printf("Digite a matrícula: ");
    scanf("%d", &a.matricula);
    printf("Digite a nota: ");
    scanf("%f", &a.nota);
    return a;
}

void imprimirAluno(Aluno a) {
    printf("\nNome: %s\n", a.nome);
    printf("Matrícula: %d\n", a.matricula);
    printf("Nota: %.2f\n", a.nota);
}

void gravarAlunoArquivo(Aluno a, FILE *arquivo) {
    fprintf(arquivo, "%s\n%d\n%.2f\n", a.nome, a.matricula, a.nota);
}

void lerAlunosArquivo() {
    FILE *arquivo = fopen("alunos.txt", "r");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo!\n");
        return;
    }

    Aluno a;
    printf("\n--- Lista de Alunos ---\n");
    while (fscanf(arquivo, " %49[^\n]\n%d\n%f\n", a.nome, &a.matricula, &a.nota) == 3) {
        imprimirAluno(a);
    }

    fclose(arquivo);
}

int main() {
    int numAlunos;
    printf("Quantos alunos deseja cadastrar (1 a 3)? ");
    scanf("%d", &numAlunos);
    
    if (numAlunos < 1 || numAlunos > MAX_ALUNOS) {
        printf("Número inválido! O programa será encerrado.\n");
        return 1;
    }
    
    FILE *arquivo = fopen("alunos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita!\n");
        return 1;
    }
    
    for (int i = 0; i < numAlunos; i++) {
        printf("\nCadastro do aluno %d:\n", i + 1);
        Aluno a = lerAluno();
        gravarAlunoArquivo(a, arquivo);
    }
    fclose(arquivo);
    
    printf("\nCadastro concluído! Lendo os dados do arquivo...\n");
    lerAlunosArquivo();
    
    return 0;

    
}
