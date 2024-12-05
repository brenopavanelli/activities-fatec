#include <stdio.h>

void exibirPares(int vetor[], int tamanho);

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    exibirPares(vetor, tamanho);

    return 0;
}

void exibirPares(int vetor[], int tamanho) {
    printf("Números pares no vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
}
