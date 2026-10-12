#include <stdio.h>
#define MAX 10

int main()
{
  int i;
  int arr1[MAX];
  int arr2[MAX] = {10,9,8,7,6,5,4,3,2,1};
  int arr3[MAX] = {10,20,30};

  for (i=0; i<MAX; i++)
   printf("O valor de arr1[%2d]=%12d arr2[%2d]=%12d arr3[%2d]=%12d \n",
          i+1, arr1[i], i+1, arr2[i], i+1, arr3[i]);



  printf("Depois do ciclo for terminar o i-->%d\n", i);
 return 0;
}
