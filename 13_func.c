#include <stdio.h>

int calcPizza(int num) {
  int value = 3 * num;
  return value;
}

void func() {
  printf("hello there");
}

int main(void) {

  // int value = calcPizza();
  printf("%d", calcPizza(3));

  func();

  return 0;
}