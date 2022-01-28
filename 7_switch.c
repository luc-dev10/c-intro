#include <stdio.h>

int main(void) {
  int years = 10;

  switch(years) {
    case 0:
      printf("0 years");
      break;
     case 1: 
      printf("1 years");
      break;
    default:
      printf("default");
      break; 
  }

}