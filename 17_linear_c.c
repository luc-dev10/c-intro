#include <stdio.h>
#include <string.h>

int linearSearch(int numbers[], int size, int key) {

  for (int i = 0; i < size; i++) {
    if (numbers[i] == key) 
      return i; 
  }

  // if not found
  return -1;

}

int main(void) {

  int numbers[3] = {1,2,3};
  printf("%d", linearSearch(numbers, 3, 3));

  return 0;
}