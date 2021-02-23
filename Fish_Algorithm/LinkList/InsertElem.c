/**
* InsertElem.c
* @author bulbasaur
* @description 
* @created 2021-02-17T20:23:09.901Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-17T20:46:17.661Z+08:00
*/

#define ERROR 0
#define OK 1

// 初始化条件：顺序线性表 L 已经存在， 1 <= i <= ListLength(L)
// 操作结果：用 e 返回 L 中第 i 个数据元素的值

Status ListInsert(LinkList *L， int i, ElemType e)
{
    int j;
    LinkList p, s;
    
    p = *L;
    j = 1; 

    while (p && j < i)
    {
        /* code */
        p = p->next;
        j++;
    }

    if (!p || j > i)
    {
        /* code */
        return ERROR;
    }

    s = (LinkList)malloc(sizeof(Node));
    s->data = e;
    
    s->next = p->next;
    p->nest = s;
    
    return OK;
    
}