#include "mathas.h"
#include "mathmd.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("start\n");
    printf("%d\n", add(1, 2));
    printf("%d\n", sub(1, 2));
    printf("%d\n", mul(1, 2));
    printf("%d\n", div(1, 2));
    printf("over\n");

    return 0;
}
