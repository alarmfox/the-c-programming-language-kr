#include <stdio.h>

/*
 * Exercise 1-8. Write a program to count blanks, tabs and newlines.
 *
 * A while loop with a if chain incrementing counters.
 */
int main(void) {
  int nb, nt, nl;
  int c;
  nt = nb = nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    else if (c == '\t')
      ++nt;
    else if (c == ' ')
      ++nb;
  }

  printf("Tabs: %3d Newl: %3d Blnk: %3d\n", nt, nl, nb);

  return 0;
}
