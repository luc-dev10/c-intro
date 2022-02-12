#include <stdio.h>
#include <string.h>

typedef struct Car_struct {
   char type[20];
   char color[20];
} Car;

int main(void) {
   Car carList[3];

   strcpy(carList[0].type, "sedan");
   strcpy(carList[0].color, "red");
   strcpy(carList[1].type, "SUV");
   strcpy(carList[1].color, "pink");
   strcpy(carList[2].type, "coupe");
   strcpy(carList[2].color, "brown");

   printf("%s %s\n", carList[2].color, carList[2].type);
   printf("%s %s\n", carList[0].color, carList[0].type);

   return 0;
}