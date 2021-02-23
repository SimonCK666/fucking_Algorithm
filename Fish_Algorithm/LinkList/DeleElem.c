/**
* DeleElem.c
* @author bulbasaur
* @description 
* @created 2021-02-17T20:46:54.260Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-17T20:49:23.580Z+08:00
*/



#define ERROR 0
#define OK 1

// 初始化条件：顺序线性表 L 已经存在， 1 <= i <= ListLength(L)
// 操作结果：用 e 返回 L 中第 i 个数据元素的值

Status ListDelete(ListList *L, int i, ElemType *e)
{
    int j;
    LinkList p, q;

    p = *L;
    j = 1;

    while (p->next && j < i)
    {
        /* code */
        p = p->next;
        ++j;
    }

    if (!(p->next) || j > i)
    {
        /* code */
        return ERROR;
    }

    q = p->next;
    p->next = q->next;

    *e = q->data;
    free(q);

    return OK; 
    
    
}