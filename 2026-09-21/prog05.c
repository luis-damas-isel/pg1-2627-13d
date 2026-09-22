#include <stdio.h>

int main(){
  int num;
  printf("Introd. um numero: ");
  scanf("%d", &num);

  if (num)
    printf("O numero [%d] nao e' ZERO\n", num);
  else
    printf("O numero [%d] e' ZERO\n", num);

  return 0;
}
