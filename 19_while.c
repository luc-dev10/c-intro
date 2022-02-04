#include <stdio.h>

int main(void) {
  int currPower;
  char userChar;
 
  currPower = 2;
  userChar = 'yds';
 
  while (userChar == 'y') {
     printf("%d\n", currPower);
     currPower = currPower * 2;
     scanf("%c", &userChar);
  }
 
  printf("Done\n");
 
  return 0;
}