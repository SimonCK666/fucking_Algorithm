// Stack 的入栈操作

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    /* data */
    ElemType *base;     // 指向 bottom
    ElemType *top;      // 指向 top
    int stackSize;      // Stack 可用最大容量
} SqStack;

#define SATCKINCREMENT 10       // 增长空间

Push(SqStack *s, ElemType e)
{
    // 如果栈满，增加空间
    if (s->top - s->base >= s->stackSize)
    {
        /* code */
        s->base = (ElemType*)realloc(s->base, (s->stackSize + SATCKINCREMENT) * sizeof(ElemType));
        if (!s->base)
        {
            /* code */
            exit(0);
        }

        s->top = s->base + s->stackSize;        // 设置栈顶
        s->stackSize = s->stackSize + SATCKINCREMENT;       // 设置栈的最大容量
        
    }

    *(s->top) = e;

    s->top++;
    
}