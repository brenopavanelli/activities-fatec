// Ex 07 
#include <stdio.h>

int main() {

  int nums[7];
  int x;
  int y;
  
  for (int i=0;i<7;i++) {
    scanf("%d", &nums[i]);
  }

  scanf("%d", &x);
  scanf("%d", &y);

  for (int i=0;i<7;i++) {
    if (nums[i] == x) {
      nums[i] = y;
    }
  }

  for (int i=0;i<7;i++) {
    printf("%d ", nums[i]);
  }
  
  return 0;
}
