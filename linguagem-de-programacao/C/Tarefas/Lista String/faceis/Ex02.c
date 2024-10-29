#include <stdio.h>
#include <string.h>

int main() {
    char string[50];

    scanf("%s", string);

    printf("String invertida: %s", strrev(string));
    
    return 0;
}