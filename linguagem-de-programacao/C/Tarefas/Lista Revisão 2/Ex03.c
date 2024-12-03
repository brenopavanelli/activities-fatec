#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PRODUTOS 2

typedef struct {
    char nome[50];
    int preco;
    int quantidade;
} Produto;

void menu();
void limparTela();
void limparBuffer();
void adicionarProduto();
void listarProdutos();

int main() {

    return 0;
}

// Auxiliar
void limparBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void limparTela() {
    system("cls");
}

// Principal
void menu() {
    Produto produtos[MAX_PRODUTOS];
    int numeroDeProdutos = 0;
    int tecla = 1;
    while (tecla!=0) {
        limparTela();
        printf("\n=== Banco Simples ===\n");
        printf("0. Sair\n");
        printf("1. Adicionar produto\n");
        printf("2. Listar produtos cadastrados\n");
        printf("3. Buscar um produto\n");
        printf("4. Exportar Dados\n");
        printf("Escolha uma opção: ");
        scanf("%d", &tecla);
        limparTela();
        limparBuffer();

        switch (tecla) {
            case 1:
                adicionarProduto(produtos);
                break;
            case 2:
                listarProdutos(produtos, numeroDeProdutos);
                break;
            case 3:
                buscarProdutos();
                break;
            case 4:
                exportarDados();
                break;
            case 0:
                printf("Encerrando do programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
     }
        
}

void adicionarProduto(Produto produtos[]) {
    fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);
    produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

    scanf("%d", &produtos[i].preco);
    
    scanf("%d", &produtos[i].quantidade);
    limparBuffer();

    numeroDeProdutos++;
}

void listarProdutos(Produto produtos[], numeroDeProdutos) {
    printf("Lista de Produtos: \n");
    for (int i; i < numeroDeProdutos; i++) {
        printf("Produto %d: %s, Preco: %d, quantidade: %d\n", i+1, produto[i].nome, produto[i].preco, 
            produto[i].quantidade);
    }
}