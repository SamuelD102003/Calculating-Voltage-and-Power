#include <stdio.h>

int main(void) {
  double resistance[5] = {16,27,39,56,81},current[5],voltage[5],power[5],totalpower=0;
  int i;
  for (i=0; i<5; i++)
    {
      printf("Enter the value of current:");
      scanf("%lf",&current[i]);
      voltage[i] = current[i] * resistance[i];
      power[i] = current[i] * voltage[i];
      totalpower += power[i];
    }
  
  printf("Resistance        Current            Voltage              Power\n");
  for (i=0; i<5; i++)
    {
      printf("%10.0lf %14.0lf %18.0lf %18.0lf",resistance[i],current[i],voltage[i],power[i]);
      printf("\n");
    }
  printf("                                        Total             %.0lf",totalpower);
  
  return 0;
}