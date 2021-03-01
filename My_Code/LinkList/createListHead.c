// 头插法建立单链表

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

/* 头插法 */

void CreateListHead(LinkList *L, int n)
{
    LinkList p;
    
    srand(time(0));     // 初始化随机数种子

    *L = (LinkList)malloc(sizeof(Node));        // 分配头节点
    (*L)->next = NULL;      // 初始 Node 指向 NULL

    for (int i = 0; i < n; i++)
    {
        /* code */
        p = (LinkList)malloc(sizeof(Node));     // 生成新的节点
        p->data = rand() % 100 + 1;     // 生成 1 - 100 之间的随机数
        p->next = (*L)->next;
        (*L)->next = p;     // 插入到表头
    }
    
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
