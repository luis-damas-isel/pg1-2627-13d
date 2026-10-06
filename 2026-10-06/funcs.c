#include <stdio.h>
#include <stdbool.h>

float max2(float x, float y)
{
  return (x>y) ? x : y;
/*
  if(x>y)
    return x;
  else
    return y;
*/
}

float max3(float x, float y, float z){
   return max2(max2(x,y), z);
}

int main(){
  float a,b,c;
  float bigOne;

  printf("Introduz 2 nums: "); scanf("%f %f", &a, &b);

  bigOne = max2(a,b);

  printf("O max entre %f e %f --> %f\n", a, b, bigOne);
  return 0;
}

