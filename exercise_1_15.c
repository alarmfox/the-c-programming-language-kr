#include <stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

/*
 * Exercise 1-15.  Rewrite the temperature covnersion program of Section 1.2 to
 * use a function for conversion.
 *
 * The function accepts a Fahrenheit and retursn a float
 */

float fahr_to_celsius(int fahr) { return (5.0 / 9.0) * (fahr - 32.0); }
int main(void) {
  float celsius;

  printf("----- Fahrenheit to Celsius conversion program -----\n");
  for (int fahr = LOWER; fahr < UPPER; fahr += STEP) {
    celsius = fahr_to_celsius(fahr);
    printf("%3d %6.1f\n", fahr, celsius);
  }

  return 0;
}
