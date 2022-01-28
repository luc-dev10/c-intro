#include <stdio.h>

void display(const int values[], int size) {
  for(int i = 0; i < size; i++) {
    printf("%d\n", values[i]);
  }
}

int main(void) {

  // nums
  // cannot be changed values of array
  const int values[12] = {1,2,3,4,5,6,7,8,9,10,11,12};

  // display
  display(values, 12);

  return 0;
}