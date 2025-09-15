#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/*
 * Exercise 1-5. Modify the temperature conversion program to print the table in
 * reverse order, that is, from 300 degress to 0. Fahrenheit table.
 *
 * Reverse the fomula: c = 5/9 * (f - 32.0) and get f = 9/5 * c + 32.
 * Replicate the same loop and print structure.
 */
int main(void) {
  float celsius;

  printf("----- (Backwards) Fahrenheit to Celsius conversion program -----\n");
  for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3d %6.1f\n", fahr, celsius);
  }

  return 0;
}
