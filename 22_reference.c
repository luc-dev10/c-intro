#include <stdio.h>

void passReference(int* i) {
  *i += 1;
}

int main(void) {
  int currPower = 2;
  passReference(&currPower);

  printf("%d", currPower);
  return 0;
}