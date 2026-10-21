#include <stdio.h>
#include <string.h>

int main(){
  char nome[30] = "Leonor";    // 6
  char apelido[] = "nao sei";  // 7
  char vazia[100] = "";        // 0

  char nome_completo[200] = "era uma vez um cavalo encantado num carrocel";
  strcpy(nome_completo, "Henrique");
  strcat(nome_completo, " ");
  strcat(nome_completo, "kumenda");
  strcat(nome_completo, " da Silva");

  printf("nome_completo = |%s|\n", nome_completo);
  return 0;

}
