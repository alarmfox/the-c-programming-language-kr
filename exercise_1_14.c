#include <stdio.h>

/*
 * Exercise 1-14. Write a program to print a histogram of the frequencies of
 * different characters in its input.
 *
 */

int main(void) {
  int frequencies[36] = {0};
  int nl, ns, nt;
  int c;

  nl = ns = nt = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    else if (c == ' ')
      ++ns;
    else if (c == '\t')
      ++nt;
    else if (c >= '0' && c <= '9')
      ++frequencies[c - '0'];
    else if (c >= 'a' && c <= 'z')
      ++frequencies[c - 'a' + 10];
  }

  int max = 0;
  for (int i = 0; i < 36; ++i) {
    if (frequencies[i] > max)
      max = frequencies[i];
  }

  for (int height = max; height > 0; --height) {
    for (int i = 0; i < 36; ++i) {
      if (frequencies[i] >= height)
        putchar('#');
      else
        putchar(' ');
      putchar(' ');
    }
    putchar('\n');
  }

  for (int i = 0; i < 36; ++i) {
    int c = i + '0';
    if (i > 9)
      c = i - 10 + 'a';
    putchar(c);
    putchar(' ');
  }
  putchar('\n');
}
