// Ex 9
#include <stdio.h>

int main() {

    int i;
    int salario;
    int filhos;
    int salario_maior;
    int salario_menor;
    int soma_filhos;
    int soma_salario;

    for (i=1;i<=5;i++) {
        scanf("%d", &salario);
        scanf("%d", &filhos);
        if (i == 1) {
            salario_maior = salario_menor = salario;
        }
        
        soma_salario += salario; 
        soma_filhos += filhos; 
        
        if (salario > salario_maior) {
            salario_maior = salario;
        }
        if (salario < salario_menor) {
            salario_menor = salario;
        }
    }

    printf("O maior salario: %d \n", salario_maior);
    printf("O menor salario: %d \n", salario_menor);
    printf("A media salarial: %d \n", soma_salario / 5);
    printf("A media de filhos: %d", soma_filhos / 5);
    
    return 0;
}