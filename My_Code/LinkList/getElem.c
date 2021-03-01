// 初始化条件：顺序线性表 L 已经存在， 1 <= i <= ListLength(L)
// 操作结果：用 e 返回 L 中第 i 个数据元素的值

#include <stdio.h>
#include <stdlib.h>

#define ERROR 0
#define OK 1

/* 链表节点定义 */

typedef int Status;     // 状态码数据类型
typedef int ElemType;   // 数据元素数据类型

typedef struct Node
{
    /* data */
    ElemType data;      // 数据域
    struct Node *next;  // 指针域
} Node, *LinkList;

/*  */

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
