#include <stdio.h>

int power(int, int);


int main()
{
  int i;
  for (i=0; i < 10; i++)
    printf("%2d\t%2d\t%2d\n", i, power(2, i), power(-3, i));
}

int power(int base, int n)
{
  int i, p;
  p = 1;
  for (i=0; i < n; i++)
    p *= base;
  return p;
}
