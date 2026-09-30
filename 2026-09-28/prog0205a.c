#include <stdio.h>

int main(void)
{
  int num;
  printf("Introd. um número: ");
  scanf("%d", &num);

  switch(num){
    case 5: printf("5\n");
    case 4: printf("4\n");
    case 3: printf("3\n");
    case 2: printf("2\n");
    case 1: printf("1\n");
            break;
    default: printf("Valor inválido\n");
  }

  return 0;
}
