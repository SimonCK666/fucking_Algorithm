/**
* ClearList.c
* @author bulbasaur
* @description 
* @created 2021-02-17T21:37:29.066Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-17T21:39:22.965Z+08:00
*/

#define ERROR 0
#define OK 1

// 单链表的整表删除

Status ClearList(LinkList *L)
{
    LinkList p, q;

    p = (*L)->next;

    while (p)
    {
        /* code */
        q = p->next;
        free(p);
        p = q;
    }

    (*L)->next = NULL;

    return OK;
    
}