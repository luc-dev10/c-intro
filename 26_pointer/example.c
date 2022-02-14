#include <stdio.h>

int main(void) {
   int someInt;
   int* valPointer; 

   someInt = 5;
   printf("someInt address is %p\n", (void*) &someInt);

   valPointer = &someInt;        
   printf("valPointer is %p\n", (void*) valPointer);
   printf("valPointer is %p\n", *valPointer);

   return 0;
}