#include <stdio.h>

/* counts line, words and characters. */


#define IN 1
#define OUT 0

int main()
{
  int c, nc, nw, nl, state;
  state = OUT;
  nl = nw = nc = 0;
  
  for (nc=0; (c=getchar()) != EOF; nc++) {
    if (c=='\n')
      nl++;
    if(c==' ' || c=='\t' || c=='\n')
      state = OUT;
    else if (state==OUT) {
      nw++;
      state = IN;
    }
  }
  printf("Total lines: %d\n", nl);
  printf("Total words: %d\n", nw);
  printf("Total chars: %d\n", nc);
}
