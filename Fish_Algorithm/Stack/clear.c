// 清空一个 Stack

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    /* data */
    ElemType *base;     // 指向 bottom
    ElemType *top;      // 指向 top
    int stackSize;      // Stack 可用最大容量
} SqStack;


ClearStack(SqStack *s)
{
    s->top = s->base;
}

