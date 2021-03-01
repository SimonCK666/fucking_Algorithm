// 创建一个 Stack

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    /* data */
    ElemType *base;     // 指向 bottom
    ElemType *top;      // 指向 top
    int stackSize;      // Stack 可用最大容量
} sqStack;

#define STACK_INIT_SIZE 100

initStack(sqStack *s)
{
    s->base = (ElemType*)malloc(STACK_INIT_SIZE * sizeof(ElemType));

if (!s->base)
{
    /* code */
    exit(0);
}

s->top = s->base;       // 最开始，top is bottom

s->stackSize = STACK_INIT_SIZE;

}