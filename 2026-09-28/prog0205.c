#include <stdio.h>

int main(void)
{
  int num;
  printf("Introd. um número: ");
  scanf("%d", &num);

  if (num<1 || num>5)
  {
    printf("Valor inválido\n");
    return 0;
  }

  if (num==5) {printf("%d\n", num); num = num -1; }
  if (num>=4) {printf("%d\n", num); num = num -1; }
  if (num>=3) {printf("%d\n", num); num = num -1; }
  if (num>=2) {printf("%d\n", num); num = num -1; }
  if (num>=1) {printf("%d\n", num); num = num -1; }

  return 0;
}
