#include <stdio.h>

// Crianca 0..10
// Jovem   11..17
// Adulto  >=18

int main(){
  int idade;

  printf("Qual a idade? ");
  scanf("%d", &idade);

  if (idade<0)
    printf("Idade invalida!!!\n");
  else
    if (idade<=10) 
      printf("Crianca\n");
    else
       if (idade<18)
         printf("Jovem\n");
       else
         printf("Adulto\n");

  return 0;
}


