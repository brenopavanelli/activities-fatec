#include <stdio.h>

#define NUM_PRODUTOS 5
#define MAX_NOME 100

struct Produto {
    char nome[MAX_NOME];
    float preco;
};

void lerDadosProduto(struct Produto *p) {
    getchar();  
    fgets(p->nome, MAX_NOME, stdin);

    scanf("%f", &p->preco);
}

float calcularPrecoTotal(struct Produto produtos[], int n) {
    float total = 0.0;
    for (int i = 0; i < n; i++) {
        total += produtos[i].preco;
    }
    return total;
}

void imprimirProduto(struct Produto p, int indice) {
    printf("Produto %d:\n Nome: %s Preço: %.2f\n", indice, p.nome, p.preco);
}

void imprimirProdutos(struct Produto produtos[], int n) {
    for (int i = 0; i < n; i++) {
        imprimirProduto(produtos[i], i + 1);  
    }
}

void imprimirPrecoTotal(float precoTotal) {
    printf("\nPreço Total: %.2f", precoTotal);
}

int main() {
    struct Produto produtos[NUM_PRODUTOS];
    
    for (int i = 0; i < NUM_PRODUTOS; i++) {
        lerDadosProduto(&produtos[i]);
    }

    imprimirProdutos(produtos, NUM_PRODUTOS);
    imprimirPrecoTotal(calcularPrecoTotal(produtos, NUM_PRODUTOS));

    return 0;
}