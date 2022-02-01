#include <stdio.h>
#include <math.h>

int main(void) {

  // compare the floats in C
  // floats are close in C and not exact

  // in C, it is not a good idea to compare using the == sign
  float x = 1.2121;
  float y = 1.21212;

  if (fabs(x - y) < 0.0001)
    printf("yes equality");

}