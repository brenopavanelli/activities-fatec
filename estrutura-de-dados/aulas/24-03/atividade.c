#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PALAVRAS 100
#define TAMANHO_MAX 50

typedef struct {
    char pilha[MAX_PALAVRAS][TAMANHO_MAX];
    int topo;
} EditorTexto;

void inicializar(EditorTexto *editor) {
    editor->topo = -1;
}

void inserir_palavra(EditorTexto *editor, char palavra[]) {
    if (editor->topo < MAX_PALAVRAS - 1) {
        editor->topo++;
        strcpy(editor->pilha[editor->topo], palavra);
    } else {
        printf("A pilha está cheia!\n");
    }
}

void desfazer(EditorTexto *editor) {
    if (editor->topo >= 0) {
        editor->topo--;
    } else {
        printf("Nada para desfazer!\n");
    }
}

void mostrar_conteudo(EditorTexto *editor) {
    if (editor->topo == -1) {
        printf("Documento vazio.\n");
    } else {
        for (int i = 0; i <= editor->topo; i++) {
            printf("%s ", editor->pilha[i]);
        }
        printf("\n");
    }
}

int main() {
    EditorTexto editor;
    inicializar(&editor);

    int opcao;
    char palavra[TAMANHO_MAX];

    while (1) {
        printf("\nOpções: [1] Digitar Palavra [2] Desfazer [3] Mostrar Documento [4] Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite uma palavra: ");
                scanf("%s", palavra);
                inserir_palavra(&editor, palavra);
                break;
            case 2:
                desfazer(&editor);
                break;
            case 3:
                mostrar_conteudo(&editor);
                break;
            case 4:
                exit(0);
            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}
