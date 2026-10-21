#include <stdio.h>
#include <string.h>

// Implementação do strlen usando arrays
int my_strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') 
        i++;
    return i;
}

// Implementação do strcpy usando arrays
char* my_strcpy(char destino[], const char origem[]) {
    int i = 0;

    for(  ; origem[i] != '\0'; i++)
        destino[i] = origem[i];

    destino[i]='\0';
    return destino;
}

// Implementação do strcat usando arrays
char *my_strcat(char destino[], const char origem[]) {
    int j = my_strlen(destino);
 
   for (int i=0; origem[i]!='\0'; )
       destino[j++] = origem[i++];
    destino[j] = '\0';

    return destino;
}

int my_strcmp (const char s1[], const char s2[]){
  int i=0;
  while(s1[i]==s2[i] && s1[i]!='\0')
    i++;

  return s1[i]-s2[i];
}



int main(){
  char nome_completo[200] = "era uma vez um cavalo encantado num carrocel";
  my_strcpy(nome_completo, "Henrique");
  my_strcat(nome_completo, " ");
  my_strcat(nome_completo, "kumenda");
  my_strcat(nome_completo, " da Silva");

  printf("nome_completo = |%s|\n", nome_completo);

  char nome1[100];
  char nome2[100];

  while(1)
  {
    printf("Primeiro nome: "); gets(nome1);
    printf("Segundo nome : "); gets(nome2);
    int res = my_strcmp(nome1, nome2);
    printf("Comparacao entre |%s| e |%s| --> %d\n", nome1, nome2, res);
  }


  return 0;

}
