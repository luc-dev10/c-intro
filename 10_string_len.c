#include <stdio.h>
#include <string.h>

int main(void) {

  // add space +1 for the null value
  char words[7] = "abcdef";

  // fetching length of the character
  int loc = strlen(words) - 1;
  printf("%c", words[loc]);
  
}