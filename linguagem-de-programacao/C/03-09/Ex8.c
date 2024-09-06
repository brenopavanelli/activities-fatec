// Ex 8
#include <stdio.h>

int main() {

    int i,idade;

    for (i=1;i<=5;i++) {
        scanf("%d", &idade);
        if (idade > 18) {
            printf("%d \n", idade);
        }
    }

    return 0;
}