#include "main.h"

int power(int a, int b)
{
    int i, result = 1;

    for (i = 0; i < b; i++)
    {
        result = result * a;
    }

    return result;
}