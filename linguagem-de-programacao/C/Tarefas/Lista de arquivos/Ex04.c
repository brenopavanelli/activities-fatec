#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    int ano;
} Post;

int main() {
    FILE *file;
    Post posts[100];
    int count = 0, menorAno, maiorAno;
    char menorTitulo[100], maiorTitulo[100];

    file = fopen("blog.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(file, " %[^\n]", posts[count].titulo) != EOF) {
        fscanf(file, "%d", &posts[count].ano);
        count++;
    }
    fclose(file);

    menorAno = maiorAno = posts[0].ano;
    strcpy(menorTitulo, posts[0].titulo);
    strcpy(maiorTitulo, posts[0].titulo);

    for (int i = 0; i < count; i++) {
        printf("Titulo: %s\nPostado em: %d\n", posts[i].titulo, posts[i].ano);
        if (posts[i].ano < menorAno) {
            menorAno = posts[i].ano;
            strcpy(menorTitulo, posts[i].titulo);
        }
        if (posts[i].ano > maiorAno) {
            maiorAno = posts[i].ano;
            strcpy(maiorTitulo, posts[i].titulo);
        }
    }

    printf("\nArtigo mais antigo: %s (%d)\n", menorTitulo, menorAno);
    printf("Artigo mais recente: %s (%d)\n", maiorTitulo, maiorAno);

    return 0;
}