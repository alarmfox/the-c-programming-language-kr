#include <stdio.h>

/*
 * Exercise 1-6. Verify that the exepression getchar() != EOF is 0 or 1.
 *
 * If I write <C-d>, it means I am sending an EOF to the STDIN of the process.
 * If I type a normal character, it will not be EOF.
 */
int main(void) {
  int c = getchar();
  printf("First: %d\n", c != EOF);
  fflush(stdin);
  c = getchar();
  printf("Second: %d\n", c != EOF);

  return 0;
}
