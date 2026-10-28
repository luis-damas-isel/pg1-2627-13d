#include <stdio.h>
#include "includes/demo.h"

typedef double BIGALHAO;

int main(){
  cls();
  printf("Depois do cls...\n");
  double aaa=2.1, bbb = 3.2;

  BIGALHAO big_one = max(aaa, bbb);

  printf("O maior entre %lf e %lf --> %lf\n", aaa, bbb, big_one);
  return 0;
}


double max(double x, double y){
  if (x>y)
    return x;
  else
    return y;
}

void cls(){
  double xxx = max(1.0, 2.0);
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
