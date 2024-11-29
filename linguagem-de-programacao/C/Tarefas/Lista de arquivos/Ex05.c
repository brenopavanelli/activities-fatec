#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float notas[4];
    float media;
} Aluno;

int compara(const void *a, const void *b) {
    Aluno *alunoA = (Aluno *)a;
    Aluno *alunoB = (Aluno *)b;
    return (alunoB->media > alunoA->media) - (alunoB->media < alunoA->media);
}

int main() {
    FILE *file, *fileOrdenado;
    Aluno alunos[100];
    int n;

    file = fopen("alunos.csv", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fscanf(file, "%d", &n); // Lê o número de alunos
    for (int i = 0; i < n; i++) {
        fscanf(file, " %[^,],%f,%f,%f,%f", alunos[i].nome, &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2], &alunos[i].notas[3]);
        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3]) / 4.0;
    }
    fclose(file);

    qsort(alunos, n, sizeof(Aluno), compara);

    fileOrdenado = fopen("alunos_ordenados.csv", "w");
    if (fileOrdenado == NULL) {
        printf("Erro ao criar o arquivo ordenado.\n");
        return 1;
    }

    fprintf(fileOrdenado, "%d\n", n);
    for (int i = 0; i < n; i++) {
        fprintf(fileOrdenado, "%s,%.1f,%.1f,%.1f,%.1f\n", alunos[i].nome, alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2], alunos[i].notas[3]);
    }

    fclose(fileOrdenado);
    printf("Dados ordenados e salvos em alunos_ordenados.csv!\n");
    return 0;
}