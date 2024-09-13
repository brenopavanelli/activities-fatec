#include <stdio.h> 

int main() {
    int nums[7]; 
    int maior, menor;

    for (int i=0;i<7;i++) {
        scanf("%d", &nums[i]);
        
        if (i==0) maior = menor = nums[i];
        if (nums[i] > maior) maior = nums[i];
        if (nums[i] < menor) menor = nums[i];
    }

    printf("maior: %d \n", maior);
    printf("menor: %d", menor);
    return 0;
}