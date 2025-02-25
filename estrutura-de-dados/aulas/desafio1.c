// Um estacionamento cobra R$ 5 a primeira hora, e R$ 3 as demais horas. Crie um programa em C que solicite ao usuário o número de horas estacionadas e calcule o valor a ser pago pelo estacionamento (não considere horas negativas nem zero). Além disso o sistema deve conceder 10% de desconto para clientes que estacionaram por um período acima de 10 horas.

#include <stdio.h>

int main() {
    int horas;
    float valor;

    printf("Digite o número de horas estacionadas: ");
    scanf("%d", &horas);

    if (horas > 10) {
        valor = (5 + (horas - 1) * 3) * 0.9;
    } else {
        valor = (5 + (horas - 1) * 3);
    }

    printf("O valor a ser pago pelo estacionamento é: R$ %.2f\n", valor);

    return 0;       
}