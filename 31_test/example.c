#include <string.h>
#include <stdio.h>

int num = 100;

int main(void) {
  int num;
  char op = 'q';

  if (op == 'q')
    printf("%d", num);
  else
    num++;

  return 0;

}

