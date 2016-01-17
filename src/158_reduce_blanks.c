#include <stdio.h>

/* replaces a string of one or more blanks by a single blank. */

#define IN 1
#define OUT 0


int main()
{
  int c;
  int state = OUT;
  while((c=getchar()) != EOF){
    if (c==' ')
      state = IN;
    else if (state == IN) {
      putchar(' ');
      putchar(c);
      state = OUT;
    } else
      putchar(c);
  }
}
