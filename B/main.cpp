#include "MyMath.h"

int main(int argc, char const *argv[])
{
    MyMath *mobj = createMath(10, 2);
    printf("%d\n", add(mobj));
    printf("%d\n", sub(mobj));
    printf("%d\n", mul(mobj));
    printf("%d\n", div(mobj));
    printf("over\n");
    delMath(mobj);
    return 0;
}
