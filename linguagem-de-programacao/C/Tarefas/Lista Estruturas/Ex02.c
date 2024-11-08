#include <stdio.h>
#include <string.h>

#define MAX_TITULO 100
#define MAX_AUTOR 100

struct Livro {
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int ano_publicacao;
};

void lerDados(struct Livro *l) {
    fgets(l->titulo, MAX_TITULO, stdin);

    fgets(l->autor, MAX_AUTOR, stdin);

    scanf("%d", &l->ano_publicacao);
}

int calcularIdadeDoLivro(int ano_publicacao) {
    int ano_atual = 2024;

    return ano_atual - ano_publicacao;  
}

void imprimirDados(struct Livro l, int idade) {
    printf("Título: %s", l.titulo);
    printf("Autor: %s", l.autor);
    printf("Ano de Publicação: %d\n", l.ano_publicacao);
    printf("Idade do Livro: %d anos\n", idade);
}

int main() {
    struct Livro livro;

    lerDados(&livro);

    imprimirDados(livro, calcularIdadeDoLivro(livro.ano_publicacao));

    return 0;
}