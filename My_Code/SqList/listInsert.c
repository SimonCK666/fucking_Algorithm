// Status 是函数类型，其值是函数结果状态代码，如 OK 等，
// 初始条件：顺序线性表 L 已经存在， 1 <= i <= ListLength(L)
// 操作结果：在 L 中第 i 个位置之前插入新的数据元素 e。L 长度 + 1

#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;

/* 顺序存储结构 */

typedef struct 
{
    /* data */
    int *data;      // 动态分配空间的首地址
    int length;     // 线性表当前长度
    int listSize;   // 线性表最大长度
} SqList;

/* 初始化顺序表 */

int InitList(SqList *L)
{
    L->data = (int*)malloc(MAX * sizeof(int));      // 动态分配内存
    
    if (!L->data)
    {
        /* 判断内存分配是否成功 */
        printf("ERROR\n");
        exit(0);
    }

    L->length = 0;      // 初始化长度为 0
    L->listSize = MAX;  // 初始化大小为 MAX

    return 0;
    
}

/* 插入操作 */

Status ListInsert(SqList *L, int i, int e)
{
    int k;

    if (L->length = MAX)
    {
        /* 顺序表已经满了 */
        return ERROR;

    }

    if (i < 1 || i > L-> length + 1)
    {
        /* 当 i 不在范围内时 */
        return ERROR;

    }

    if (i <= L->length)     // 当输入的数据不在表尾
    {
        /* 将要插入位置后元素向后移动一位 */
        for ( k = L->length; k >= i; k--)
        {
            /* code */
            L->data[k + 1] = L->data[k];

        }

        L->data[i - 1] = e;     // 将元素插入
        L->length++;

        return OK;
        

    }
    
    
    
}

int main(int argc, char const *argv[])
{
    
    return 0;
}

