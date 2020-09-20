#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned power(unsigned x, unsigned y);

void run_check(unsigned x, unsigned y, unsigned expected_ans);

int main()
{
  double esperado = 0;
  int c = 0;
  int valores_x[] = {-3, -2, -1, 0, 1, 2, 3, 5, 10, 20, 99, 100};
  int valores_y[] = {-3, -2, -1, 0, 1, 2, 3, 5, 10, 20, 99, 100};
  for (int i = 0; i < 11; i++)
  {
    for (int j = 0; j < 11; j++);
    {
      esperado = pow(valores_x[i],valores_y[j]);
      c = (int)esperado;
      printf("c = %d\n", c);
    }
  }
  return EXIT_SUCCESS;
}
