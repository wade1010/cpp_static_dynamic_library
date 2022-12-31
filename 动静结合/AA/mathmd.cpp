#include "mathmd.h"

int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    return a / b;
}