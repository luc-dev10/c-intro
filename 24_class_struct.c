#include <stdio.h>;

typedef struct Home_struct {
   int numBathrooms;
   int numFloors;
   int numPeople;
   int numRooms;
} Home;

Home InitHome() {
   Home tempHome;

   tempHome.numBathrooms = 5;
   tempHome.numFloors = 3;
   tempHome.numPeople = 9;
   tempHome.numRooms = 7;

   return tempHome;
}

int main() {
   Home myHome = InitHome();

   printf("%d Floors\n", myHome.numFloors);
   printf("%d Rooms\n", myHome.numRooms);

   return 0;
}