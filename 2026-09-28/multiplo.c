#include <stdio.h>
#include <stdbool.h>

bool isMultipleOf(int n, int valor){
  return (n%valor==0);
}

int main(){
  int num, quociente;
  printf("Introd. um número e o quociente: ");
  scanf("%d %d", &num, &quociente);

  if (isMultipleOf(num, quociente))
    printf("É MULTIPLO\n");
  else
    puts("NÃO É MULTIPLO");

  return 0;

}
