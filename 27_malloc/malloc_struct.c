
#include <stdio.h>
#include <stdlib.h>

typedef struct myItem_struct {
   int num1;
   int num2;
} myItem;

void myItem_PrintNums(myItem* itemPtr) {
   if (itemPtr == NULL) return;
   
   printf("num1: %d\n", itemPtr->num1); // get value
   printf("num2: %d\n", itemPtr->num2); // get value
}

int main(void) {
   myItem* myItemPtr1 = NULL;
   
   myItemPtr1 = (myItem*)malloc(sizeof(myItem));
   
   myItemPtr1->num1 = 5;    // access member set value
   (*myItemPtr1).num2 = 10; // access member set value
   
   myItem_PrintNums(myItemPtr1);
   
   return 0;
}