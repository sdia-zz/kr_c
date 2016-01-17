#include <stdio.h>

int main()
{
  int nc = 0;
  for(nc=0; (getchar()) != EOF; nc++)
    ;
  printf("%d\n", nc);
}
