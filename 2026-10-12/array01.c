#include <stdio.h>

int main()
{
  char vogais[5] = {'a','e','i','o','u'};
//  char vogais[] = {'a','e','i','o','u'};
  printf("%lu\n", sizeof(vogais));

  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  printf("%lu\n", sizeof(arr));


  int arr2[];
  for (int i=0; i<sizeof(arr2)/sizeof(arr2[0]); i++)
    printf("Posicao %d --> %d\n", i, arr2[i]);

  return 0;
}
