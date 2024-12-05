#include <stdio.h>

void buscarValor(int vetor[], int tamanho, int valor);

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valor;

    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    buscarValor(vetor, tamanho, valor);
    return 0;
}

void buscarValor(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            printf("Valor encontrado na posicao: %d\n", i);
            return;
        }
    }
    printf("Valor nao encontrado.\n");
}
