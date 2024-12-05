#include <stdio.h>

void calcularMedia(int vetor[], int tamanho);

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    calcularMedia(vetor, tamanho);
    return 0;
}

void calcularMedia(int vetor[], int tamanho) {
    int soma = 0;
    int acimaDaMedia = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }

    float media = (float)soma / tamanho;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > media) {
            acimaDaMedia++;
        }
    }

    printf("Media: %.2f\n", media);
    printf("Valores acima da media: %d\n", acimaDaMedia);
}
