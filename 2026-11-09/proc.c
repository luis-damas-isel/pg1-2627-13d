#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

double read_resistence(const char prompt[]) {
  char s[20];
  double num; // parte numérica da string
  char suffix; // sufixo do número guardado na string

  // Ler a string a partir do teclado
  printf(prompt); gets(s);

  num = strtod(s, NULL);  // parte numerica
  suffix = s[strlen(s)-1];

  switch(suffix){
    case 'G':
    case 'g': num *= 1000;

    case 'm':
    case 'M': num *= 1000;

    case 'k':
    case 'K': num *= 1000;
  }
  return num;
}

int main(){
  double rx = read_resistence("Introd. Resis 1: ");
  double ry = read_resistence("Introd. Resistencia 2: ");
  printf("rx->|%lf|  ry->|%lf|\n", rx, ry);
  return 0;
}
