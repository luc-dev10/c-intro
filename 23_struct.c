#include <stdio.h>

typedef struct TimeHrMin_struct {
   int hourValue;
   int minuteValue;
} TimeHrMin;

int main(void) {
  
  TimeHrMin runTime1;
  TimeHrMin runTime2;
  TimeHrMin runTime3; 
  runTime1.hourValue = 5;
  runTime1.minuteValue = 46;
  runTime3.hourValue = runTime1.hourValue;
  
  return 0;
}