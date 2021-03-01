// 尾插法建立单链表

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

/* 尾插法 */

void CreateListTail(LinkList *L, int n)
{
    LinkList p, r;

    srand(time(0));     // 初始化随机数种子

    *L = (LinkList)malloc(sizeof(Node));
    r = *L;     // r 指向链表尾部

    for (int i = 0; i < n; i++)
    {
        /* code */
        p->data = rand() % 100 + 1;     // 生成 1 - 100 的随机数
        r->next = p;
        r = p;      // r 始终指向链表尾部
    }
    
    r->next = NULL;     // 表示当前链表结束

}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
