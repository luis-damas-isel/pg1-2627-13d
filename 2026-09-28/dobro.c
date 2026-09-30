#include <stdio.h>

int dobro(int y){
  return 2*y;
}

int main(){
  int n=5, k=12;
  int res1 = dobro(n);
  int res2 = dobro(123);

  printf("O dobro de %d --> %d\n", n, res1);
  printf("O dobro de %d --> %d\n", 123, res2);

  return 0;
}
