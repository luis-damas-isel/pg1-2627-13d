#include <stdio.h>
#define MAX1 10
#define MAX2 20
#define MAX3 500

void inic_array(int arr[], int n_elems, int value){
  for (int i=0; i<n_elems; i++)
    arr[i] = value;
}


int main()
{
 int i;
 int arr1[MAX1] = {1,2,3,4,5};
 int arr2[MAX2];
 int arr3[MAX3];

  printf("Dimensao do arr1 --> %lu\n", sizeof(arr1));
  printf("Dimensao do arr2 --> %lu\n", sizeof(arr2));
  printf("Dimensao do arr3 --> %lu\n", sizeof(arr3));

  getchar();

 inic_array(arr1, MAX1/2, 0);  // iniciliazar metade do array com 0
 inic_array(arr2, MAX2, -1);   // inic todo o array com -1
 inic_array(arr3, MAX3, 123);

 puts("Done!!!");
 return 0;
}
