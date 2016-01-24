#include <ctype.h>
#include <stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

int getchr(void)
{
  // get a possibly pushed back value

  return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many characters.\n");
  else
    buf[bufp++] = c;
}



int getint(int *pn){
  int c, sign;

  // skip white space
  while(isspace(c=getchar()))
    ;

  // skip not number
  if (!isdigit(c) && c !='-' && c!='-' && c != EOF) {

    //db
    printf("ungetting : ");
    putchar(c);
    printf("\n");

    ungetch(c);
    return 0;
  }


  // get sign
  sign = (c == '-') ? -1 : 1;
  if (c=='-' || c=='+')
    c = getchr();

  for (*pn = 0; isdigit(c); c=getchr())
    *pn = 10 * (*pn) + (c - '0');

  *pn *= sign;

  if (c!=EOF)
    ungetch(c);

  return c;
}

int main() {
  int n, array[10];
  for (n=0;n<10;n++)
    array[n] = 0;

  for (n = 0; n < 10 && getint(&array[n]) != EOF; n++)
    printf("%d\n", array[n]);
}
