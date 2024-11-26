#include <stdio.h>
#include <string.h>

#define MAX_NOME 100

struct Pessoa {
    char nome[MAX_NOME];
    int idade;
    float altura;
};



void lerDados(struct Pessoa *p) {
    fgets(p->nome, MAX_NOME, stdin);
    
    scanf("%d", &p->idade);
    
    scanf("%f", &p->altura);
}

int verificarMaiorIdade(int idade) {
    return idade >= 18;
}

void imprimirDados(struct Pessoa p) {
    printf("Nome: %s", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);
    
    if (verificarMaiorIdade(p.idade)) {
        printf("Maior de idade: Sim\n");
    } else {
        printf("Maior de idade: Não\n");
    }
}

int main() {
    struct Pessoa pessoa;

    lerDados(&pessoa);
    
    imprimirDados(pessoa);
    
    return 0;
}