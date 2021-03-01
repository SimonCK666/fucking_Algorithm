// 栈的当前容量

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    /* data */
    ElemType *base;     // 指向 bottom
    ElemType *top;      // 指向 top
    int stackSize;      // Stack 可用最大容量
} SqStack;

int StackLen(SqStack s)
{
    return (s.top - s.base);
}