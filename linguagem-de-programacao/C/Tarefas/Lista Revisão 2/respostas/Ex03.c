#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PRODUTOS 100

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

void adicionarProduto(Produto produtos[], int *total);
void listarProdutos(Produto produtos[], int total);
void buscarProduto(Produto produtos[], int total);
void salvarCSV(Produto produtos[], int total);

int main() {
    Produto produtos[MAX_PRODUTOS];
    int totalProdutos = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar produto\n");
        printf("2. Listar produtos\n");
        printf("3. Buscar produto\n");
        printf("4. Salvar em CSV\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer

        switch (opcao) {
            case 1:
                adicionarProduto(produtos, &totalProdutos);
                break;
            case 2:
                listarProdutos(produtos, totalProdutos);
                break;
            case 3:
                buscarProduto(produtos, totalProdutos);
                break;
            case 4:
                salvarCSV(produtos, totalProdutos);
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

void adicionarProduto(Produto produtos[], int *total) {
    if (*total >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido.\n");
        return;
    }

    printf("Nome do produto: ");
    fgets(produtos[*total].nome, sizeof(produtos[*total].nome), stdin);
    produtos[*total].nome[strcspn(produtos[*total].nome, "\n")] = '\0';
    printf("Preco: ");
    scanf("%f", &produtos[*total].preco);
    printf("Quantidade: ");
    scanf("%d", &produtos[*total].quantidade);
    getchar(); // Limpa o buffer
    (*total)++;
    printf("Produto adicionado!\n");
}

void listarProdutos(Produto produtos[], int total) {
    printf("\nProdutos cadastrados:\n");
    for (int i = 0; i < total; i++) {
        printf("Produto %d: %s, Preco: %.2f, Quantidade: %d\n",
               i + 1, produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
    }
}

void buscarProduto(Produto produtos[], int total) {
    char nome[50];
    printf("Digite o nome do produto: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    for (int i = 0; i < total; i++) {
        if (strcmp(produtos[i].nome, nome) == 0) {
            printf("Encontrado: %s, Preco: %.2f, Quantidade: %d\n",
                   produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
            return;
        }
    }
    printf("Produto nao encontrado.\n");
}

void salvarCSV(Produto produtos[], int total) {
    char nomeArquivo[100];
    printf("Nome do arquivo CSV: ");
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    nomeArquivo[strcspn(nomeArquivo, "\n")] = '\0';

    FILE *arquivo = fopen(nomeArquivo, "w");
    if (!arquivo) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }

    fprintf(arquivo, "Nome,Preco,Quantidade\n");
    for (int i = 0; i < total; i++) {
        fprintf(arquivo, "%s,%.2f,%d\n", produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
    }

    fclose(arquivo);
    printf("Dados salvos em %s\n", nomeArquivo);
}
