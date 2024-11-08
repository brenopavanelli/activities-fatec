#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
};

void lerLivro(struct Livro *livro) {
    fgets(livro->titulo, 100, stdin);
    livro->titulo[strcspn(livro->titulo, "\n")] = '\0';

    fgets(livro->autor, 100, stdin);
    livro->autor[strcspn(livro->autor, "\n")] = '\0'; 

    scanf("%d", &livro->anoPublicacao);
    getchar();  // Limpa o buffer
}

void imprimirLivro(struct Livro livro) {
    printf("Título: %s, Autor: %s, Ano de Publicação: %d\n", livro.titulo, livro.autor, livro.anoPublicacao);
}

int compararLivrosPorTitulo(const void *a, const void *b) {
    struct Livro *livroA = (struct Livro *)a;
    struct Livro *livroB = (struct Livro *)b;
    return strcmp(livroA->titulo, livroB->titulo); // Ordena por título em ordem alfabética
}

void lerLivros(struct Livro livros[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        lerLivro(&livros[i]);
    }
}

void imprimirLivros(struct Livro livros[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Livro %d: ", i + 1);
        imprimirLivro(livros[i]);
    }
}

int main() {
    struct Livro livros[3]; 

    lerLivros(livros, 3);

    qsort(livros, 3, sizeof(struct Livro), compararLivrosPorTitulo);

    printf("\nLivros em ordem alfabética pelo título:\n");
    imprimirLivros(livros, 3);

    return 0;
}