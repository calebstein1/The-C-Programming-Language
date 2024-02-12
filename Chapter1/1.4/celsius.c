#include <stdio.h>

int main()
{
  float fahr, cel;
  int lower, upper, step;

  lower = -40;
  upper = 120;
  step = 10;

  cel = lower;

  printf("Celsius Fahrenheit\n");

  while (cel <= upper)
  {
    fahr = (9.0 / 5.0) * cel + 32;
    printf("%7.0f %10.0f\n", cel, fahr);
    cel += step;
  }

  return 0;
}
