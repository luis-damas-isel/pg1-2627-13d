#include <stdio.h>
void tabuada_while(int valor){
  int i;

  i=1;
  while (i<=10){
    printf("%d x %d = %d\n", valor, i, valor*i);
    ++i;
  }
}

void tabuada(int valor){
  for(int i=1; i<=10 ; ++i)
    printf("%d x %d = %d\n", valor, i, valor*i);
  puts("------------------");
}

void tabuadas(int ini, int fim){
  while(ini<=fim)
    tabuada(ini++);
}

int main(){
  int n1, n2;
  printf("Que tabuadas: "); scanf("%d %d", &n1, &n2);
  tabuadas(n1, n2);
  return 0;
}

