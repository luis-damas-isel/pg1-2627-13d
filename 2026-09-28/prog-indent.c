#include <stdio.h>

/*
1) Se o input for 5 e 20?  h é maior que dez.
2) Se o input for 5 e 8?   (nada)
3) Se o input for 0 e -1?  (nada)
4) Se o input for -1 e 20? A tem um valor negativo.
*/

int main(void)
{
  int a, b;
  printf("Introd. dois números: ");
  scanf("%d %d", &a, &b);

  if (a >= 0)
  {
    if (b > 10)
      printf("B é maior que dez.\n");
  }
  else
   printf("A tem um valor negativo.\n");

  return 0;
}
