#include <stdio.h>

int main()
{
  int c, lc;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ' && lc == ' ')
      continue;
    putchar(c);
    lc = c;
  }

  return 0;
}
