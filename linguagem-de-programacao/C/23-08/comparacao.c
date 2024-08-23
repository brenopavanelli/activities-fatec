#include <stdio.h>

int main() {

    // 0 = False
    // 1 = True

    int n1 = 1, n2 = 2;

    // And
    int resultado = n1 && n2;
    printf("%d \n", resultado);
    // Ambos != 0

    // Or
    resultado = n1 || n2;
    printf("%d \n", resultado);
    // Pelo menos um != 0

    // Not
    resultado = (n1 && n2) || !n1;
    printf("%d \n", resultado);

    // ----------------------------------------------------------------------

    // igualdade
    resultado = n1 == n2;
    printf("%d \n", resultado);

    // desigualdade
    resultado = n1 != n2;
    printf("%d \n", resultado);

    //maior que
    resultado = n1 > n2;
    printf("%d \n", resultado);

    // menor que
    resultado = n1 < n2;
    printf("%d \n", resultado);

    // maior ou igual
    resultado = n1 >= n2;
    printf("%d \n", resultado);

    // menor ou igual
    resultado = n1 <= n2;
    printf("%d \n", resultado);

    return 0;
}
