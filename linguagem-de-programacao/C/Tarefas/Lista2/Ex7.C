// Ex 07 
#include <stdio.h>
#include "entrada-saida.c"

int main() {

  int nums[7];
  int x;
  int y;
  
  coletar_vetor(nums, 7);

  scanf("%d", &x);
  scanf("%d", &y);

  for (int i=0;i<7;i++) {
    if (nums[i] == x) {
      nums[i] = y;
    }
  }

  exibir_vetor(nums, 7);
  return 0;
}
