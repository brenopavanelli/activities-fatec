#include <stdio.h>
#include <string.h>

int main() {
    char string[50];

    scanf("%s", string);

    printf("Número de caracteres: %lu", strlen(string));
    
    return 0;
}