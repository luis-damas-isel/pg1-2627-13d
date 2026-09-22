#include <stdio.h>
int main()
{
  int a=11,b=22,c=33;
  printf("a=%d b=%d c=%d\n", a, b, c);
  a = b = c = 44;
 printf("a=%d b=%d c=%d\n", a, b, c);

  return 0;
}
