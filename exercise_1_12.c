#include <stdio.h>

/*
 * Exercise 1-12. Write a program that prints its input one word per line.
 *
 * While getchar() loop. If the character read is a space or a tab,
 * putchar('\n'). Otherwise putchar(c). Avoid multiple space saving the previous
 * char.
 */
int main(void) {

  int c, prev = 0;
  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\t') && prev != ' ' && prev != '\t' && prev != '\n')
      putchar('\n');
    else
      putchar(c);

    prev = c;
  }
  return 0;
}
