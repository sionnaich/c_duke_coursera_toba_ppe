#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int* array, size_t n)
{
    size_t length = 1;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        for (size_t i = 0; i < n; i++)
        {
            if (array[i + 1] > array[i])
            {
                length++;
            }
            else
            {
                length = 1;
            }
        }
    }
    return length;
}
