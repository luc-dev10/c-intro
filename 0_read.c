#include <stdio.h>

/* Define your function here */ 
void SwapValues(int* userVal1, int* userVal2, int* userVal3, int* userVal4) {
      
}


int main(void) {

   /* Type your code here. Your code must call the function.  */
   int input1, input2, input3, input4;
   scanf("%d %d %d %d", &input1, &input2, &input3, &input4);
   
   // scanf("%d", &input1);
   // scanf("%d", &input2);
   // scanf("%d", &input3);
   // scanf("%d", &input4);
   
   // define pointers
   int *userVal1 = &input1, *userVal2 = &input2, *userVal3 = &input3, *userVal4 = &input4;
   
   // int *userVal1 = NULL, *userVal2 = NULL, *userVal3 = NULL, *userVal4 = NULL;
   // userVal1 = &input1;
   // userVal2 = &input2;
   // userVal3 = &input3;
   // userVal4 = &input4;

   // swap
   SwapValues(*userVal1, *userVal2, *userVal3, *userVal4);
   
   // print
   printf("%d %d %d %d\n", *userVal1, *userVal2, *userVal3, *userVal4);
   
   return 0;
}