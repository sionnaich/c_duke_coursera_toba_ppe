#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int* array, size_t n);

int main()
{
    int array1[10] = { 1, 2, 1, 3, 5, 7, 2, 4, 6, 9 };
    int array2[0] = {};
    int array3[1] = { 0 };
    int array4[2] = { 1, 2 };
    int array5[3] = { -1, -999999999, 3 };
    int array6[4] = { -99, -100, 101, -102 };
    int array7[5] = { 1, -2, 3, -4, 5 };
    int array8[6] = { 1, 2, 3, 4, 5, 6 };
    int array9[7] = { 1, 1, 2, 3, 4, 4, 5 };
    int array10[8] = { -9, -8, -7, -7, -8, -9, -10, -11 };
    int array11[5] = { 24, 22, 44, 45, 999 };
    int array12[9] = { 42, 47, 55, 1, 2, 9, 10, 3, 5 };
    int resp1 = 4;
    int resp2 = 0; //isso ta certo?
    int resp3 = 1; //isso ta certo?
    int resp4 = 2;
    int resp5 = 2;
    int resp6 = 2;
    int resp7 = 2;
    int resp8 = 6;
    int resp9 = 4;
    int resp10 = 3;
    int resp11 = 4;
    int resp12 = 4;
    int test1 = maxSeq(array1, 10);
    int test2 = maxSeq(array2, 0);
    int test3 = maxSeq(array3, 1);
    int test4 = maxSeq(array4, 2);
    int test5 = maxSeq(array5, 3);
    int test6 = maxSeq(array6, 4);
    int test7 = maxSeq(array7, 5);
    int test8 = maxSeq(array8, 6);
    int test9 = maxSeq(array9, 7);
    int test10 = maxSeq(array10, 8);
    int test11 = maxSeq(array11, 5);
    int test12 = maxSeq(array12, 9);
    if (test1 == resp1 && test2 == resp2 && test3 == resp3 && test4 == resp4 && test5 == resp5
        && test6 == resp6 && test7 == resp7 && test8 == resp8 && test9 == resp9 && test10 == resp10
        && test11 == resp11 && test12 == resp12)
    {
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
}