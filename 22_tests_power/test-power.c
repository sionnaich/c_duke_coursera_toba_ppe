#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned power(unsigned x, unsigned y);

void run_check(int x, int y, int expected_ans)
{
    if (power(x, y) != expected_ans)
    {
        exit(EXIT_FAILURE);
    }
}

int main()
{
    double esperado = 0;
    int c = 0;
    int valores_x[] = { -3, -2, -1, 0, 1, 2, 3, 5, 10 };
    int valores_y[] = { -1, 0, 1, 2, 3, 5, 9 };
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (valores_x[i] == 0 && valores_y[j] < 0)
            {
                ;
            }
            else if (valores_x[i] == 0 && valores_y[j] == 0)
            {
                esperado = 1;
                c = (int)esperado;
                run_check(valores_x[i], valores_y[j], c);
                //printf("%d^%d = %d\n", valores_x[i], valores_y[j], c);
            }
            else
            {
                esperado = pow(valores_x[i], valores_y[j]);
                c = (int)esperado;
                run_check(valores_x[i], valores_y[j], c);
                //printf("%d^%d = %d\n", valores_x[i], valores_y[j], c);
            }
        }
    }
    return EXIT_SUCCESS;
}
