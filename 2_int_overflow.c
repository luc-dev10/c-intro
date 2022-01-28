#include <stdio.h>

int main(void) {
  
  // exceeding the stored value, will cut the number
  // value is around 2 billion
  // int i = 1000000000000;
  // printf("%d", i);
  int x = 6, y = 2;
  x /= y + 1;
  printf("%d", x);

}