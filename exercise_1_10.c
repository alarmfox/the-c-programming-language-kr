
#include <stdio.h>

/*
 * Exercise 1-9. Write a program to copy its input to its output, replacing each
 * tab by \t, each backspace by \b and each blackslash by \\. This makes tabs
 * and backspaces visible in an unambiguous way.
 *
 * While getchar() loop. If the target is encountered put 2 chars: putchar('\\')
 * and putchar(value).
 */

int main(void) {

  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    } else if (c == '\b') {
      putchar('\\');
      putchar('b');
    } else if (c == '\\') {
      putchar('\\');
      putchar('\\');
    } else
      putchar(c);
  }

  return 0;
}
