#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// Realize a função void str_toggle(char str[]) que troca, na string str, 
// as maiúsculas para minúsculas e as minúsculas para maiúsculas. 
// Exemplo:  
// char s1[] = "Hoje Realizamos o teste PG1"; 
// str_toggle(s1); 
// printf("'%s'", s1); // apresenta no output: 'hOJE rEALIZAMOS O TESTE pg1' 

void str_toggle(char str[]){
  for(int i=0; str[i]!='\0'; i++)
    str[i] =  isupper(str[i]) ? tolower(str[i]) : toupper(str[i]);
}

/*
Realize a função bool first_and_last_vowels(const char str[], int pos_vowels[2]) que procura a 
primeira e a última vogal da string str. O índice da primeira vogal em str é colocado no primeiro elemento de 
pos_vowels e o índice da última vogal é colocado como segundo elemento de pos_vowels. Retorna true se for 
encontrada pelo menos uma vogal, false caso contrário. Na realização desta função não poderá utilizar funções da 
biblioteca de strings. 
*/

bool is_vowel(char ch){
	ch = tolower(ch);
	return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}

bool first_and_last_vowels(const char str[], int pos_vowels[2]){
	int index=0;
	for (int i=0; str[i]!='\0'; i++)
	  if (is_vowel(str[i]))
	    if(index==0)
	    {
	      pos_vowels[index] = pos_vowels[index+1] = i;
	      index++;
	    }
	    else
	      pos_vowels[index] = i;
	
	return (index>0);
}
	
	
	
int main(){
  char s1[] = "Hoje Realizamos o teste PG1"; 
  str_toggle(s1); 
  printf("'%s'", s1); // apresenta no output: 'hOJE rEALIZAMOS O TESTE pg1' 
 
  while(true){
	  int vRes[] =  {888, 999};
	  printf("Uma string: ");
	  gets(s1);
	  bool res = first_and_last_vowels(s1, vRes); 
	  printf("res -> %s  vRes(ini=%d,final=%d)\n", res ? "TRUE" : "FALSE", vRes[0], vRes[1]);
  }

  return 0;
}
