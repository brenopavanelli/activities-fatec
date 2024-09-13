#include <stdio.h>
#include "entrada-saida.c"

int main() {

    int nums[8];
    int n;

    coletar_vetor(nums, 8);

    scanf("%d", &n);

    for(int i=0;i<8;i++) {
        if (n == nums[i]) {
            printf("SIM");
            return 1;
        }
    }

    printf("NAO");

    return 0;
}