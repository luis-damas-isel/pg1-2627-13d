#include <stdio.h>
#include "utils.h"

int main(){
  random_init();
  for (int i=1; i<=10; i++)
     printf("Valor aleatorio %d: '%c'\n",i, random_range('0', '9'));

  char str[11]={1,2,3,4,5,6,7,8,9,10,11};
  printf("Array antes da chamada da funcao |%s|\n", str);
  strRandomDigits(str);
  printf("Array depois da chamada da funcao |%s|\n", str);

  return 0;
}
