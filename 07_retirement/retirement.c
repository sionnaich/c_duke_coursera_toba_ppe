#include <stdio.h>
#include <stdlib.h>

struct _retire_info
{
  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;

double calcular_balanco(double atual, double rate_of_return, double contribution)
{
  double ans = (atual * (1 + rate_of_return)) + contribution;
  return ans;
}

void retirement (int startAge, double initial, retire_info working, retire_info retired)
{
  //FUNCAO AQUI
  /*STARTING CONDITIONS: startAge = 327 month; initial = 21345.0; retire_info working e depois
    retired*/
  //fazer um conversor de 12 meses --> 1 ano (for loop? COM MODULO OPERATOR)
  double atual = initial;
  int idade = startAge;
  int anos = idade / 12;
  int meses = idade % 12;
  for (int i = 0; i < working.months; i++)
  {
    printf("Age %3d month %2d you have $%.2lf\n", anos, meses, atual);
    atual = calcular_balanco(atual, working.rate_of_return, working.contribution);
    idade++;
    anos = idade / 12;
    meses = idade % 12;
  }
  for (int j = 0; j < retired.months; j++)
  {
    printf("Age %3d month %2d you have $%.2lf\n", anos, meses, atual);
    atual = calcular_balanco(atual, retired.rate_of_return, retired.contribution);
    idade++;
    anos = idade / 12;
    meses = idade % 12;
  }
}

int main()
{
  //FUNCAO AQUI
  retire_info working;
  retire_info retired;
  working.months = 489;
  working.contribution = 1000.0;
  working.rate_of_return = 0.045/12;
  retired.months = 384;
  retired.contribution = -4000.0;
  retired.rate_of_return = 0.01/12;
  retirement(327, 21345.0, working, retired);
  return EXIT_SUCCESS;
}
