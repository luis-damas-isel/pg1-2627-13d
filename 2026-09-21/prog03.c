#include <stdio.h>

int main(){
  int x=2,y=3,z=4;

  printf("x=%d y=%d z=%d\n", x, y, z);
  x=y=z=55;
  printf("x=%d y=%d z=%d\n", x, y, z);

  return 0;
}
