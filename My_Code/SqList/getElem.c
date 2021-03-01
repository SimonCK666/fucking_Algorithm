// Status 是函数类型，其值是函数结果状态代码，如 OK 等，
// 初始条件：顺序线性表 L 已存在， 1 <= i <= ListLength(L)
// 操作结果：用 e 返回 L 中第 i 个数据元素的值

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

/* 按位查找顺序表元素 */

Status GetElem(SqList L, int i, int *e)
{
    if (L.length == 0 || i < 1 || i > L.length)
    {
        /* code */
        printf("ERROR\n");
        return ERROR;
    }
    
    *e = L.data[i - 1];
    printf("The Value of Elem: %d\n", *e);

    return *e;
}


int main(int argc, char const *argv[])
{
    
    return 0;
}

