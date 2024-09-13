#include <stdio.h>

// 5 8 13 21 34 55 89 144

int main() {

  int vetor[8], soma=0;

  for(int i=0;i<8;i++) {
    scanf("%d", &vetor[i]);
    soma += vetor[i];
  }

  printf("A soma e: %d", soma);
  return 0;
}