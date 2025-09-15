#include <stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

/*
 * Exercise 1-3. Modify the temperature conversion program to print a heading
 * above the table.
 *
 * Add a printf before the loop to print the heading with a new line in it.
 */
int main(void) {
  float celsius;

  printf("----- Fahrenheit to Celsius conversion program -----\n");
  for (int fahr = LOWER; fahr < UPPER; fahr += STEP) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3d %6.1f\n", fahr, celsius);
  }

  return 0;
}
