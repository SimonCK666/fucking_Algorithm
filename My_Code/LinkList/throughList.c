// 单链表的遍历

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

/* 单链表的遍历 */

void DisplayList(LinkList L) {
    LinkList p;     // 声明一个节点

    p = L->next;    // 让 p 指向 L 的第一个节点

    for ( ; p != NULL; p = p->next)
    {
        /* code */
        printf("%d\t", p->data);
    }

    printf("\n");
    
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
