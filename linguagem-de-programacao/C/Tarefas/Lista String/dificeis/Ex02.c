#include <stdio.h>
#include <string.h>

#define TAMANHO 50

int main() {
    char strPrincipal[TAMANHO];
    char strSubstring[TAMANHO];
    
    scanf("%s", strPrincipal); 
    scanf("%s", strSubstring); 

    char *resultado = strstr(strPrincipal, strSubstring);
    
    if (resultado) {
        int posicao = resultado - strPrincipal;
        printf("Substring encontrada na posição: %d\n", posicao);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}
