#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

size_t maxSeq(int* array, size_t n)
{
    size_t length = 1;
    size_t lentemp = 1;
    //bool descontinuo = false;
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
        for (size_t i = 0; i < n-1; i++)
        {
            if (array[i + 1] > array[i])
            {
                lentemp++;
            }
            else
            {
                //descontinuo = true;
                if (lentemp > length)
                {
                    length = lentemp;
                }
                lentemp = 1;
            }
        }
        if (lentemp > length)
        {
            length = lentemp;
        }
    }
    return length;
}
