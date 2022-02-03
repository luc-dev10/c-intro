#include <stdio.h>

int binarySearch(int numbers[], int size, int key) {

  int mid;
  int low = 0;
  int high = size - 1;

  while (high >= low) {
    mid = (high + low) / 2;

    if (numbers[mid] < key) {
      low = mid + 1;
    } else if (numbers[mid] > key) {
      high = mid - 1;
    } else {
      return mid;
    }

  }

  // if not found
  return -1;

}

int main(void) {

  int numbers[6] = {1,2,3,4,5,6};
  printf("%d", binarySearch(numbers, 6, 6));
  return 0;
}