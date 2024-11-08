#include <stdio.h>

#define MAX_NOME 100

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Pessoa {
    char nome[MAX_NOME];
    struct Data data_nascimento;
};

void lerData(struct Data *d) {
    scanf("%d/%d/%d", &d->dia, &d->mes, &d->ano);
    getchar();
}

void lerDadosPessoa(struct Pessoa *p) {
    fgets(p->nome, MAX_NOME, stdin);

    lerData(&p->data_nascimento); 
}

int calcularIdade(struct Data data_nascimento) {

    int ano_atual = 2024;
    int mes_atual = 11;
    int dia_atual = 8;

    int idade = ano_atual - data_nascimento.ano;

    if (mes_atual < data_nascimento.mes || (mes_atual == data_nascimento.mes && dia_atual < data_nascimento.dia)) {
        idade--;
    }

    return idade;
}

void imprimirDadosPessoa(struct Pessoa p, int idade) {
    printf("Nome: %s", p.nome);
    printf("Data de Nascimento: %02d/%02d/%d\n", p.data_nascimento.dia, p.data_nascimento.mes, p.data_nascimento.ano);
    printf("Idade: %d\n", idade);
}

int main() {
    struct Pessoa pessoa;

    lerDadosPessoa(&pessoa);

    imprimirDadosPessoa(pessoa, calcularIdade(pessoa.data_nascimento));

    return 0;
}