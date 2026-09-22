
#include <stdio.h>

// Pedir um nº inteiro e dizer se o número é ou não multiplo de 5
int main(){
  int num;
  printf("Introd. um numero: ");
  scanf("%d", &num);

  if (num%5==0)
    printf("O numero [%d] e' multiplo de 5\n", num);
  else
    printf("Bolas nao e' multiplo de 5\n");

  return 0;
}
