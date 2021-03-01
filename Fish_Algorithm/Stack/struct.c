// Stack 的顺序存储结构

#include <stdio.h>

typedef struct 
{
    /* data */
    ElemType *base;     // 指向 bottom
    ElemType *top;      // 指向 top
    int stackSize;      // Stack 可用最大容量
} SqStack;


