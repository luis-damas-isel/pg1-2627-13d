#include <stdio.h>

int main(void)
{
  int num;
  printf("Introd. um número: ");
  scanf("%d", &num);

  if (num==1) printf("Um\n");
  if (num==2) printf("Dois\n");
  if (num==3) printf("Tres\n");
  if (num<=0 || num>=4) printf("Valor inválido\n");

  return 0;
}
