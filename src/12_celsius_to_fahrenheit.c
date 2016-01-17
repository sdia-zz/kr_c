#include <stdio.h>

/*print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */


float farh_to_celsius(float);


#define MAX_FAHR 300.0
#define MIN_FAHR 0.0
#define STEP_FAHR 20.0


float fahr_to_celsius(float f)
{
  return (5.0 / 9.0) * (f - 32.0);
}

int main()
{
  float fahr;
  printf("------------------\n");  
  printf("Temp(ºF)| Temp(ºC)\n");
  printf("------------------\n");

  for (fahr = MIN_FAHR; fahr < MAX_FAHR; fahr = fahr + STEP_FAHR)
    printf("%4.2f\t| %4.2f\n", fahr, fahr_to_celsius(fahr));

  printf("------------------\n");
  return 0;
}
