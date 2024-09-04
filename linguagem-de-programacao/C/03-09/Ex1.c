// Ex 1
#include <stdio.h>

int main() {

    float reais = 0.0;
    float cotacao_dolar = 0.0; 
    scanf("%f", &reais);
    scanf("%f", &cotacao_dolar);

    printf("O valor em dolares e: %f", reais * cotacao_dolar);
    
    
    return 0;
}