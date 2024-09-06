// Ex 7
#include <stdio.h>

int main() {

    int i, n; 
    scanf("%d", &n);

    if (n <= 1) {
        printf("N Primo");
    } else {
        for (i=2; i < n; i++) {
            if (n % i == 0) {
                printf("N primo");
                break;
            }
        }
        if (i==n) {
            printf("Primo");
        }
    return 0;
}