// 单链表节点的定义

#include <stdio.h>
#include <stdlib.h>

/* 链表节点定义 */

typedef int Status;     // 状态码数据类型
typedef int ElemType;   // 数据元素数据类型

typedef struct Node
{
    /* data */
    ElemType data;      // 数据域
    struct Node *next;  // 指针域
} Node, *LinkList;


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
