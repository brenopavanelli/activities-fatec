#include <stdio.h>

void swap(int *valorA, int *valorB);

int main() {
    int a = 10, b = 20;

    printf("Antes da troca: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *valorA, int *valorB) {
    int temp = *valorA;
    *valorA = *valorB;
    *valorB = temp;
}
