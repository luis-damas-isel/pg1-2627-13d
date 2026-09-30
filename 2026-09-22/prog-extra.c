#include <stdio.h>
int main(void)
{
 int a,b;
 printf("Introd. dois números: ");
 scanf("%d %d", &a, &b);

 if (a >= 0)
   if (b > 10)
     printf("B é maior que dez.");
 else
   printf("A tem um valor negativo.");
}
