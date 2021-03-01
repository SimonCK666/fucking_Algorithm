// 出栈操作

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    /* data */
    ElemType *base;     // 指向 bottom
    ElemType *top;      // 指向 top
    int stackSize;      // Stack 可用最大容量
} SqStack;

Pop(SqStack *s, ElemType *e)
{
    if (s->top == s->base)
    {
        /* 栈已经空空如也 */
        return;
    }
    
    *e = *--(s->top);
}