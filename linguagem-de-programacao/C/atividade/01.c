#include <stdio.h>

int main() {

    float reais;
    float cotacao_dolar;

    printf("Indique o valor em reais: ");
    scanf("%f", &reais);
    printf("Indique a cotacao do dolar: ");
    scanf("%f", &cotacao_dolar);

    float valor_em_dolar = reais * cotacao_dolar;

    printf("O valor em dolar e: %f", valor_em_dolar);

    return 0;
}
