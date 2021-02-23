/**
* CreateListTail.c
* @author bulbasaur
* @description 
* @created 2021-02-17T21:28:01.212Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-17T21:32:31.577Z+08:00
*/

// 尾插法建立单链表

void CreateListTail(LinkList *L, int n)
{
    LinkList p, r;
    int i;

    srand(time(0));
    *L = (LinkList)malloc(sizeof(Node));
    r = *L;   // r 指向链表尾部

    for ( i = 0; i < n; i++)
    {
        /* code */
        p = (Node *)malloc(sizeof(Node));
        p->data = rand() % 100 + 1;
        r->next = p;
        r = p;   // r 始终指向链表尾部
    }
    
    r->next = NULL;
    
}