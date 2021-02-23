/**
* ListDelete.c
* @author bulbasaur
* @description 
* @created 2021-02-23T17:02:47.273Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-23T17:10:43.118Z+08:00
*/

// 删除在 L 中的第 i】 个数据元素

Status ListDelete(StaticLinkList L, int i) 
{
    int j, k;
    
    if (i < 1 || i > ListLength(L))
    {
        /* code */
        return ERROR;
    }

    k = MAX_SIZE - 1;
    
    for ( j = 0; j <= i - 1; j++)
    {
        /* code */
        k = L[k].cur;
    }

    j = L[k].cur;
    L[k].cur = L[j].cur;

    Free_SLL(L, j);

    return OK;
    
}

// 将下标为 k 的空闲结点会受到备用链表
void Free_SLL(StaticLinkList space, int k)
{
    space[k].cur = space[0].cur;
    space[0].cur = k;
}

// 返回 L 中数据元素个数
int ListLength(StaticLinkList L) 
{
    int j = 0;
    int i = L[MAXSIZE - 1].cur;
    
    while (i)
    {
        /* code */
        i = L[i].cur;
        j++;
    }

    return j;
    
}