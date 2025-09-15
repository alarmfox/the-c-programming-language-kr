#include <stdio.h>

/*
 * Exercise 1-2. Experiment to find out what happens when `printf`'s argument
 * string contains '\c', where c is some character not listed above.
 *
 * If c is some special  character the string will have some particular
 * behavious like go on next line and tab otherwise it prints nothing.
 */
int main(void) {
  printf("Test \1");
  return 0;
}
