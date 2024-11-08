#include <stdio.h>
#include <string.h>

#define MAX_NOME 100

struct Produto {
    char nome[MAX_NOME];
    float preco;
};

void lerDadosProduto(struct Produto *p) {
    fgets(p->nome, MAX_NOME, stdin);

    scanf("%f", &p->preco);
    getchar();  
}

float calcularPrecoTotal(struct Produto p1, struct Produto p2) {
    return p1.preco + p2.preco;
}

void imprimirDadosProduto(struct Produto p) {
    printf("Nome: %s", p.nome);
    printf("Preço: %.2f\n", p.preco);
}

void imprimirPrecoTotal(float precoTotal) {
    printf("Preço Total: %.2f\n", precoTotal);
}

int main() {
    struct Produto produto1, produto2;

    lerDadosProduto(&produto1);

    lerDadosProduto(&produto2);

    imprimirDadosProduto(produto1);
    
    imprimirDadosProduto(produto2);

    imprimirPrecoTotal(calcularPrecoTotal(produto1, produto2));

    return 0;
}