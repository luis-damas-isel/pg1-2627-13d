#include <stdio.h>

int main(){
  int n1, n2;
  char resposta;

  printf("Um numero: "); scanf("%d", &n1);

  printf("Introd um char: "); scanf(" %c", &resposta);
  printf("Resposta=|%c|\n", resposta);
  printf("Outro numero: "); scanf("%d", &n2);

  return 0;
}
