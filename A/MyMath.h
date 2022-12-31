#ifndef _MYMATH_H_
#define _MYMATH_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct MyMath
{
    int a;
    int b;
} MyMath;

MyMath *createMath(int a, int b);

int add(MyMath *mobj);
int sub(MyMath *mobj);
int mul(MyMath *mobj);
int div(MyMath *mobj);
void delMath(MyMath *mobj);

#endif