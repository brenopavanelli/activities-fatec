//Ex 5
#include <stdio.h>

int main() {

    int i;
    int numero;
    int numero_maior;
    int numero_menor;
    int soma;

    for (i=1;i<=5;i++) {
        scanf("%d", &numero);
        if (i == 1) {
            numero_maior = numero_menor = numero;
        }
        soma += numero; 
        if (numero > numero_maior) {
            numero_maior = numero;
        }
        if (numero < numero_menor) {
            numero_menor = numero;
        }
    }

    printf("O maior: %d \n", numero_maior);
    printf("O menor: %d \n", numero_menor);
    printf("A media: %d", soma / 5);
    
    return 0;
}