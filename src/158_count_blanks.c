#include <stdio.h>

/* count blanks, tabs and new lines. */

int main()
{
  int cblanks, ctabs, cnl, nc, c;
  cblanks = ctabs = cnl = 0;

  for(nc=0; (c=getchar()) != EOF; ++nc) {
    if (c == ' ')
      cblanks++;
    else if (c == '\t')
      ctabs++;
    else if (c == '\n')
      cnl++;
  }
  printf("Blanks: %d\n", cblanks);
  printf("Tabs  : %d\n", ctabs);
  printf("Lines : %d\n", cnl);
}
