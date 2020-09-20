#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned power(unsigned x, unsigned y);

void run_check(unsigned x, unsigned y, unsigned expected_ans)
{
    if (power(x, y) != expected_ans)
    {
        exit(EXIT_FAILURE);
    }
}

int main()
{
    run_check(0, 0, 1);
    run_check(1, 1, 1);
    run_check(0, 10, 0);
    run_check(1, -1, 1);
    run_check(-1, 1, -1);
    run_check(-1, 2, 1);
    run_check(10, 9, 1000000000);
    run_check(2, -1, 0.5);
    return EXIT_SUCCESS;
}
