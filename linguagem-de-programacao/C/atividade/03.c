#include <stdio.h>

int main(){

    int contador = 1;

    int num;
    scanf("%d", &num);

    while (contador<=10){
        int tabuada = num * contador;
        printf("%d\n", tabuada);
        contador++;
    }

    return 0;
}
