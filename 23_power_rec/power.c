#include <stdio.h>
#include <stdlib.h>

unsigned power_helper(unsigned x, unsigned y, unsigned base)
{
    //base cases
    if (y == 0) return 1;
    else if (y == 1) return x;
    return power_helper(x * base, y - 1, base);
}
unsigned power(unsigned x, unsigned y)
{
    return power_helper(x, y, x);
}
