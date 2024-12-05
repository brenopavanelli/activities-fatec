#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 100
#define MAX_PRODUTOS 100

typedef struct {
    char nome[50];
    char cpf[15];
} Cliente;

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

Cliente clientes[MAX_CLIENTES];
Produto produtos[MAX_PRODUTOS];
int totalClientes = 0, totalProdutos = 0;

void cadastrarCliente();
void cadastrarProduto();
void listarClientes();
void listarProdutos();
void salvarDados();

int main() {
    int opcao;

    do {
        printf("\n=== Sistema de Cadastro ===\n");
        printf("1. Cadastrar Cliente\n");
        printf("2. Cadastrar Produto\n");
        printf("3. Listar Clientes\n");
        printf("4. Listar Produtos\n");
        printf("5. Salvar Dados\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1: cadastrarCliente(); break;
            case 2: cadastrarProduto(); break;
            case 3: listarClientes(); break;
            case 4: listarProdutos(); break;
            case 5: salvarDados(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}

void cadastrarCliente() {
    if (totalClientes >= MAX_CLIENTES) {
        printf("Limite de clientes atingido!\n");
        return;
    }

    printf("Digite o nome do cliente: ");
    fgets(clientes[totalClientes].nome, sizeof(clientes[totalClientes].nome), stdin);
    clientes[totalClientes].nome[strcspn(clientes[totalClientes].nome, "\n")] = '\0';

    printf("Digite o CPF do cliente: ");
    fgets(clientes[totalClientes].cpf, sizeof(clientes[totalClientes].cpf), stdin);
    clientes[totalClientes].cpf[strcspn(clientes[totalClientes].cpf, "\n")] = '\0';

    totalClientes++;
}

void cadastrarProduto() {
    if (totalProdutos >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }

    printf("Digite o nome do produto: ");
    fgets(produtos[totalProdutos].nome, sizeof(produtos[totalProdutos].nome), stdin);
    produtos[totalProdutos].nome[strcspn(produtos[totalProdutos].nome, "\n")] = '\0';

    printf("Digite o preço do produto: ");
    scanf("%f", &produtos[totalProdutos].preco);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &produtos[totalProdutos].quantidade);
    getchar();

    totalProdutos++;
}

void listarClientes() {
    printf("\n=== Lista de Clientes ===\n");
    for (int i = 0; i < totalClientes; i++) {
        printf("Cliente %d: Nome: %s, CPF: %s\n", i + 1, clientes[i].nome, clientes[i].cpf);
    }
}

void listarProdutos() {
    printf("\n=== Lista de Produtos ===\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("Produto %d: Nome: %s, Preço: %.2f, Quantidade: %d\n", i + 1, produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
    }
}

void salvarDados() {
    printf("Função de salvar ainda não implementada.\n");
}
