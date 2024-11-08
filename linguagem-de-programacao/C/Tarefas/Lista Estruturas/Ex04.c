#include <stdio.h>

#define MAX_MODELO 100

struct Carro {
    char modelo[MAX_MODELO];
    int ano_fabricacao;
    int quilometragem;
};

void lerDadosCarro(struct Carro *c) {
    fgets(c->modelo, MAX_MODELO, stdin);
    
    scanf("%d", &c->ano_fabricacao);

    scanf("%d", &c->quilometragem);
    getchar();  
}

int calcularIdadeCarro(int ano_fabricacao) {
    int ano_atual = 2024;

    return ano_atual - ano_fabricacao; 
}

void imprimirDadosCarro(struct Carro c) {
    printf("Modelo: %s", c.modelo);
    printf("Ano de Fabricação: %d\n", c.ano_fabricacao);
    printf("Quilometragem: %d\n", c.quilometragem);
}

// Função para imprimir a idade do carro
void imprimirIdadeCarro(int idade) {
    printf("Idade do Carro: %d anos\n", idade);
}

int main() {
    struct Carro carro;

    lerDadosCarro(&carro);

    imprimirDadosCarro(carro);

    imprimirIdadeCarro(calcularIdadeCarro(carro.ano_fabricacao));

    return 0;
}