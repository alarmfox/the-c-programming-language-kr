#include <stdio.h>

/*
 * Exercise 1-13. Write a program to  print a histogram of lenghts of words in
 * its input. It is easy to draw the histogram with the bars horizontal; a
 * vertical orientation is more challenging.
 *
 * Horizontal: for each word count the number of characters. Print '#' for each
 * one.
 * Vertical: insert lenghts in an array. Calculate the max height. Loop for the
 * height going to zero if the i-th is greater or equal than the current height
 * print a '#'.
 */
#define IN_WORD 0
#define OUT_WORD 1

// #define HORIZONTAL_HIST

int main(void) {

#ifdef HORIZONTAL_HIST
  int c;
  int current = 0;
  int status = OUT_WORD;
  while ((c = getchar()) != EOF) {
    if (status == OUT_WORD && (c != ' ' && c != '\t' && c != '\n')) {
      current = 0;
      status = IN_WORD;
    } else if (status == IN_WORD && (c == ' ' || c == '\t' || c == '\n')) {
      status = OUT_WORD;
      for (int i = 0; i < current; ++i) {
        putchar('#');
      }
      putchar('\n');
    }

    if (status == IN_WORD && (c != ' ' && c != '\t' && c != '\n')) {
      ++current;
    }
  }
#else
  int c;
  int nw = 0;
  int current = 0;
  int status = OUT_WORD;
  int lenghts[256];

  while ((c = getchar()) != EOF) {
    if (status == OUT_WORD && (c != ' ' && c != '\t' && c != '\n')) {
      current = 0;
      status = IN_WORD;
    } else if (status == IN_WORD && (c == ' ' || c == '\t' || c == '\n')) {
      status = OUT_WORD;
      lenghts[nw++] = current;
    }

    if (status == IN_WORD && (c != ' ' && c != '\t' && c != '\n')) {
      ++current;
    }
  }
  int max = 0;
  for (int i = 0; i < nw; ++i) {
    if (lenghts[i] > 0)
      max = lenghts[i];
  }

  for (int height = max; height > 0; --height) {
    for (int j = 0; j < nw; ++j) {
      if (lenghts[j] >= height) {
        putchar('#');
        putchar(' ');
      }
    }
    putchar('\n');
  }

#endif
}
