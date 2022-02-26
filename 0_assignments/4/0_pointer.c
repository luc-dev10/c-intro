#include <stdio.h>
#include <stdlib.h>

int main(void) {
  void *memory = malloc(sizeof(int));

  int *ptr = &memory;
  *ptr = 20;
  printf("memory %p\n", (void*) &memory);
  printf("memory %p\n", (void*) &ptr);

  free(memory);

  return 0;
}