#include <stdio.h>

/*
 * Exercise 1-9. Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 *
 * While getchar() loop. Print the character only if the previous or the current
 * are not a space. Update the prev with the current char at every iteration.
 */
int main(void) {
  int c, prev = ' ';
  while ((c = getchar()) != EOF) {
    if (c != ' ' || prev != ' ')
      putchar(c);

    prev = c;
  }

  return 0;
}
