#include <stdio.h>

int main() {
    FILE *file;
    char titulo[100];
    int ano;

    file = fopen("blog.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("Digite o título do post: ");
        scanf(" %[^\n]", titulo);
        printf("Digite o ano de publicação: ");
        scanf("%d", &ano);
        fprintf(file, "%s\n%d\n", titulo, ano);
    }

    fclose(file);
    printf("Posts salvos com sucesso!\n");
    return 0;
}