// 销毁一个栈

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    /* data */
    ElemType *base;     // 指向 bottom
    ElemType *top;      // 指向 top
    int stackSize;      // Stack 可用最大容量
} SqStack;


DestroyStack(SqStack *s)
{
    int i, len;
    len = s->stackSize;

    for ( i = 0; i < len; i++)
    {
        /* code */
        free(s->base);
        s->base++;
    }

    s->base = s->top = NULL;

    s->stackSize = 0;
    
}