#include <stdio.h>

// void display(int values[][], int sizeX, int sizeY) {
//   for(int x = 0; x < sizeX; x++) {
//     for (int y = 0; y < sizeY; y++)
//       printf("%d\n", 1);
//   }
// }

int main(void) {

  // nums
  // cannot be changed values of array
  int values[4][4];

  values[0][0] = 1;
  values[0][1] = 2;
  values[0][2] = 3;
  values[0][3] = 4;

  values[1][0] = 1;
  values[1][1] = 2;
  values[1][2] = 3;
  values[1][3] = 4;

  values[2][0] = 1;
  values[2][1] = 2;
  values[2][2] = 3;
  values[2][3] = 4;

  values[3][0] = 1;
  values[3][1] = 2;
  values[3][2] = 3;
  values[3][3] = 4;

  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
       printf("%d\n", values[i][j]);
    }
   }


  // display
  // display(values, 4, 4);

  return 0;
}