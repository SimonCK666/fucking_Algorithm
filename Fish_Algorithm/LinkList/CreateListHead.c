/**
* CreateListHead.c
* @author bulbasaur
* @description 
* @created 2021-02-17T21:18:18.090Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-17T21:26:25.126Z+08:00
*/

// 头插法建立单链表示例

void CreateListHead(LinkList *L, int n)
{
    LinkList p;
    int i;

    srand(time(0));   // 初始化随机数种子

    *L = (LinkList)malloc(sizeof(Node));
    (*L)->next = NULL;   // 初始 Node 指向 NULL

    for ( i = 0; i < n; i++)
    {
        /* code */
        p = (LinkList)malloc(sizeof(Node));   //  生成新节点
        p->data = rand() % 100 + 1;   // 1 - 100 之间的随机数
        p->next = (*L)->next;
        (*L)->next = p;
    }
    
}