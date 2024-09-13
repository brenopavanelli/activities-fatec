#include <stdio.h> 

int main() {

    int nums[8];
    int soma = 0;

    for (int i=0;i<8;i++) {
        scanf("%d", &nums[i]);
        soma += nums[i];
    }

    printf("Soma: %d", soma);

    return 0;
}