#include <stdio.h>
#include <stdbool.h>

#define MIN_YEAR 1
#define MIN_MONTH 1
#define MAX_MONTH 12
#define INVALID_MONTH -1

bool isMultipleOf(int n, int valor){
  return (n%valor==0);
}

bool isLeapYear(int year){
  return (isMultipleOf(year, 4) &&
         !isMultipleOf(year, 100)) ||
         isMultipleOf(year, 400);
}

// meses com 30 dias: 4, 6, 9, 11
// meses com 28 ou 29 dias: 2
// meses com 31 dias: todos os outros
int month_days(int month, int year){
  if (year<MIN_YEAR || (month<MIN_MONTH || month>MAX_MONTH))
    return INVALID_MONTH;

  switch(month){
    case 4:
    case 6:
    case 9:
    case 11: return 30;
    case 2: if (isLeapYear(year))
              return 29;
            else
              return 28;
    default: return 31;
  }
}

// Compara duas datas armazenadas em 3 inteiros
// Devolve:
//   0    - Se as datas forem iguais
//   <0   - Se a data1 for inferior à data2
//   >0   - Caso contrário
// Assume-se que as datas são válidas
int date_cmp(int d1, int m1, int y1, int d2, int m2, int y2){
  if (y1!=y2)
    return y1-y2;

  if(m1!=m2)
    return m1-m2;

  return d1-d2;
}




int main(){
  int dd1, mm1, yy1, dd2, mm2, yy2;

  printf("Introduza uma data: ");
  scanf("%d %d %d", &dd1, &mm1, &yy1);

  printf("Introduza outra data: ");
  scanf("%d %d %d", &dd2, &mm2, &yy2);

  if (date_cmp(dd1, mm1, yy1, dd2, mm2, yy2)<0)
    printf("A primeira data é menor que a segunda\n");
  else
    if (date_cmp(dd1, mm1, yy1, dd2, mm2, yy2)==0)
      printf("A primeira data é igual 'a segunda\n");
    else
      printf("A primeira data é maior que a segunda\n");

  return 0;

}
