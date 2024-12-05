#include <stdio.h>

int somaRecursiva(int numeros[], int tamanho);

int main() {
    int numeros[10];

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    int soma = somaRecursiva(numeros, 10);
    printf("Soma dos números: %d\n", soma);

    return 0;
}

int somaRecursiva(int numeros[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    }
    return numeros[tamanho - 1] + somaRecursiva(numeros, tamanho - 1);
}
