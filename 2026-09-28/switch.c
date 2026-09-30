#include <stdio.h>

int main(void)
{
  int num;
  printf("Introd. um número: ");
  scanf("%d", &num);

  printf("-----inicio----\n");
  switch(num){
    case 1: printf("Um\n"); break;
    case 2: printf("Dois\n");
            break;
    case 3: printf("Tres\n");
            break;
    default: printf("Valor inválido\n");
  }


  printf("-----fim----\n");
  return 0;
}
