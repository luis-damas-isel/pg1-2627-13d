#include <stdio.h>
#include <string.h>

#define MAX 200
int main()
{
  char nome[MAX+1];
  printf("Qual o nome: "); // scanf("%s", nome); /* SEM & antes do nome do vetor */

  gets(nome); /* SEM & antes do nome do vetor */
  printf("O nome lido foi [%s]\n", nome);
 return 0;
}
