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

int main(){
  int ano, mes;

  printf("Introduza o ano e mes: "); scanf("%d %d", &ano, &mes);

  printf("O mes %d/%d tem --> %d dias\n", mes, ano, month_days(mes, ano));

  return 0;

}
