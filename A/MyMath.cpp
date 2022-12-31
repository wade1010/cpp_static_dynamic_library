#include "MyMath.h"

MyMath *createMath(int a, int b)
{
    MyMath *mobj = (MyMath *)malloc(sizeof(MyMath));
    assert(mobj);
    mobj->a = a;
    mobj->b = b;
    return mobj;
}

int add(MyMath *mobj)
{
    return mobj->a + mobj->b;
}
int sub(MyMath *mobj)
{
    return mobj->a - mobj->b;
}
int mul(MyMath *mobj)
{
    return mobj->a * mobj->b;
}
int div(MyMath *mobj)
{
    if (mobj->b == 0)
    {
        return 0; // 简单处理下
    }

    return mobj->a / mobj->b;
}
void delMath(MyMath *mobj)
{
    if (mobj == nullptr)
        return;
    free(mobj);
    mobj = nullptr;
}