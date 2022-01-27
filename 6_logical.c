#include <stdio.h>

int main(void) {
  // check equality
  if ((1 > 2) && (1 > -1)) {
    printf("1");
  }

  if ((1 > 2) || (1 > -1)) {
    printf("2");
  }

}