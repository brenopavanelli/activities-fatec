// Ex 4
#include <stdio.h>

int main() {

    int i = 1;
    int qtd_n; 
    scanf("%d", &qtd_n);

    int numero;
    int numero_maior;
    int numero_menor;
    int soma;

    while(i<=qtd_n) {
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
        i++;
    }

    printf("O maior: %d \n", numero_maior);
    printf("O menor: %d \n", numero_menor);
    printf("A media: %d", soma / qtd_n);
    
    return 0;
}