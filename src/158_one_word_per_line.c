#include <stdio.h>

/* print 1 word per line. */

#define IN 1
#define OUT 0

int main()
{
  int c, state;
  state = OUT;
  while((c=getchar()) != EOF) {
    if (c==' ' || c=='\t' || c=='\n' || c=='.') {
      if (state == IN)
	putchar('\n');
      state = OUT;
    } else {
      putchar(c);
      state = IN;
    }
  }
}
