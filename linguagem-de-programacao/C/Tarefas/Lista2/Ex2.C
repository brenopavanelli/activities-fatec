#include <stdio.h>

int main() {

    int nums[10];
    int cont_par = 0, cont_impar = 0;

    for (int i=0;i<10;i++) {
        scanf("%d", &nums[i]);

        if (nums[i] % 2 == 0) {
            cont_par++;
        } else {
            cont_impar++;
        }
    }

    printf("pares: %d  \n", cont_par);
    printf("impares: %d", cont_impar);

    return 0;
}