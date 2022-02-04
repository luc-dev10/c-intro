
#include <stdio.h>

int main() {
   int stop = 11;
   int result;
   int a;
   int b;
 
   result = 0;

   for (a = 0; a < 4; ++a) {
      printf("%d: ", a);
      for (b = 0; b < 3; ++b) {
         result += a + b;
         if (result > stop) {
            printf("_ ");
            continue;
         }
         printf("%d,", result);
      }
      printf("\n");
   }
}