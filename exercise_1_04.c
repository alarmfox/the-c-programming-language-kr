#include <stdio.h>

#define LOWER -20
#define UPPER 100
#define STEP 20

/*
 * Exercise 1-4. Write a program to print the corresponding Celsius to
 * Fahrenheit table.
 *
 * Reverse the fomula: c = 5/9 * (f - 32.0) and get f = 9/5 * c + 32.
 * Replicate the same loop and print structure.
 */
int main(void) {
  float fahr;

  printf("----- Celsius to Fahrenheit conversion program -----\n");
  for (int celsius = LOWER; celsius < UPPER; celsius += STEP) {
    fahr = (9.0 / 5.0) * celsius + 32;
    printf("%3d %6.1f\n", celsius, fahr);
  }

  return 0;
}
