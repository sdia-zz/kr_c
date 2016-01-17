#include <stdio.h>

/* Number of digits, white space, blank, tab, newline. */


int main()
{
  int c, i, nblanks, nc;
  int ndigit[10];

  nblanks = nc = c = i = 0;

  for (i=0; i<10; i++)
    ndigit[i] = 0;
  
  while((c=getchar()) != EOF) {
    if (c >= '0' && c <= '9' )
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\t' || c == '\n')
      ++nblanks;
    else
      ++nc;
  }
  printf("Digits:\t");
  for(i=0; i<10; i++)
    printf(", %d", ndigit[i]);
  printf(", white space = %d, other = %d\n", nblanks, nc);
}
