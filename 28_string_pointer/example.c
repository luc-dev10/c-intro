
#include <stdio.h>
#include <string.h>

int main(void) {
   char userString[50];
   char* stringPointer = NULL;

   strcpy(userString, "book bell");

   stringPointer = strchr(userString, 'b');
   while (stringPointer != NULL) {
      *stringPointer = 'c';
      stringPointer = strchr(userString, 'b');
   }

   printf("%s\n", userString);

   return 0;
}