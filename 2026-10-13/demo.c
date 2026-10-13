#include <stdio.h>
#include <stdbool.h>

void drawLine(int n, char ch, bool addNewLine){
  while(n-->0)
    putchar(ch);
  if (addNewLine)
    putchar('\n');
}

void drawSquareWithPrefix(int prefix_size, char prefix_char, int size, char ch){
  int n=size;
  while (n-->0){
     drawLine(prefix_size, prefix_char, false);
     drawLine(size, ch,true);  // Desenha a linha do quadrado
  }
}

void drawSquare(int size, char ch){
  drawSquareWithPrefix(0,' ', size, ch);
}


int main(){
  drawLine(3, '+', false);
  drawLine(5, '#', true);
  puts("----------------");
  drawSquare(3, '+');
  puts("----------------");

  drawSquare(5, '#');
  puts("----------------");

  puts("----------------");
  drawSquareWithPrefix(6, ' ', 3, '+');
  drawSquareWithPrefix(4, ' ', 5, '#');
  puts("----------------");

  return 0;
}
