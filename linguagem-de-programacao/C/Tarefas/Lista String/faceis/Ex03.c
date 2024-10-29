#include <stdio.h>

#define MAX_TAM 100 

int main() {
    char str[MAX_TAM]; 
    char strSemEspacos[MAX_TAM]; 
    int j = 0; 

    scanf("%[^\n]", str); 
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') { 
            strSemEspacos[j] = str[i]; 
            j++; 
        }
    }

    printf("String sem espaços: %s", strSemEspacos);

    return 0;
}
