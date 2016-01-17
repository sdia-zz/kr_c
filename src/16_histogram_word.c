#include <stdio.h>


#define MAX_LENGTH 10


int main()
{
  int nc, c, i, j;
  int hist[MAX_LENGTH + 1];
  nc = 0;
  for (i=1; i <= MAX_LENGTH; i++)
    hist[i] = 0;

  while ((c=getchar()) != EOF) {
    if (c==' '||c=='\t'||c=='\n') {
      if (nc!=0) {
	++hist[nc];
        nc = 0;
      } 
    } else if (nc <= MAX_LENGTH)
	nc++;
  }
  for (i = 1; i <= MAX_LENGTH; i++) {
    printf("%2d:", i);
    for (j = 0; j <= (hist[i] - 1); j++)
      printf("*");
    printf("\n");
  }
}
