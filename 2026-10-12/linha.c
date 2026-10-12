#include <stdio.h>
#include <stdbool.h>

// Desenha um linha com ch repetido n_chars vezes
// NOTA: No fim adiciona automaticamente um NewLine
//       apenas se addNewLine for true
void drawLine(int n_chars, char ch, bool addNewLine){
  for(int i=1; i<=n_chars; i++)
    putchar(ch);

  if(addNewLine)
    putchar('\n');
}

// Desenha um rectangulo de lados size1 e size2
void drawRectangle(int rows, int cols, char ch){
  for (int i=1; i<=rows; i++)
   drawLine(cols, ch, true);
}

// Desenha um quadrado de lado size
void drawSquare(int size, char ch){
  drawRectangle(size, size, ch);
}

//
// *
// **
// ***
// ****
// drawTriangle(4, '*')

void drawLeftTriangle(int size, char ch){
  for (int i=1; i<=size; i++)
    drawLine(i, ch, true);
}

void drawRightTriangle(int size, char ch){
  for (int i=1; i<=size; i++){
    drawLine(size-i, ' ', false); // Desenha os espaços à esquerda
    drawLine(i, ch, true);     // Desenha os carateres visiveis
  }
}


int main(){
/*
  drawLine(10,'@');
  drawRectangle(3, 7, '-');

  drawRectangle(7,3,'@');

  drawSquare(20, '*');

  drawLeftTriangle(4, '+');
  drawLeftTriangle(7, '@');
*/
  drawLeftTriangle(4, '+');
  drawRightTriangle(4, '+');

  return 0;
}
