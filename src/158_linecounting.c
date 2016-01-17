#include <stdio.h>

int main()
{
  int nc, lc, c;
  nc = lc = 0;

  for(nc=0; (c=getchar())!=EOF; nc++) {
    if (c == '\n')
      lc++;
  }
  printf("%d\n", lc);
}
