#include <stdio.h>

int main() {
    FILE *file;
    char linha[100];

    file = fopen("mensagem.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), file) != NULL) {
        printf("%s", linha);
    }

    fclose(file);
    return 0;
}

