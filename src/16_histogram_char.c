#include <stdio.h>

#define MAX_LENGTH 25

int main()
{
  int hist[MAX_LENGTH];
  int nc=0;
  int c, i, j;

  for (i=0; i <= MAX_LENGTH ; i++)
    hist[i] = 0;

  while ((c=getchar()) != EOF) {
    ++nc;
    ++hist[c - 'a'];
  }
  for (i=0; i <= MAX_LENGTH ; i++) {
    putchar(i + 'a');
    printf(": ");
    for (j=0; j < hist[i]; j++)
      printf("|");
    printf("\n");
  }
  printf("\n");
  printf("Total: %d\n", nc);
}
