#include <stdio.h>
/*
int my_strlen(const char s[]){
  int i;

  for(i=0; s[i]!='\0'; i++)
       ;
  return i;
}
*/

int my_strlen(const char s[]){
  int i=0;

  while(s[i]!='\0')
       i++;

  return i;
}

// Copia o conteúdo da string src para a string dest.
// Devolve a string destino.

char *my_strcpy(char dest[], const char src[]){

  return dest;
}


int main(){
  char nome[30] = "Leonor";    // 6
  char apelido[] = "nao sei";  // 7
  char vazia[100] = "";        // 0


  char nome_completo[100]="";
  nome_completo = "Henrique";

  // Quero saber quantos chars tem cada string
  printf("A string [%s] tem %d chars\n", nome, my_strlen(nome));
  printf("A string [%s] tem %d chars\n", apelido, my_strlen(apelido));
  printf("A string [%s] tem %d chars\n", vazia, my_strlen(vazia));

  while(1)
  {
    printf("Nome: ");
    gets(nome);
    if(nome[0]=='\0') break;
    printf("O nome [%s] tem %d chars\n", nome, my_strlen(nome));
  }

  puts("That's All Folks!!!");
  return 0;

}
