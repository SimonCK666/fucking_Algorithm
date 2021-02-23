/**
* Tencent.c
* @author bulbasaur
* @description 
    快速找到未知长度单链表的中间节点
* @created 2021-02-23T17:15:42.235Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-23T17:20:20.941Z+08:00
*/

Status GetMidNode(LinkList L, ElemType *e)
{
    LinkList search, mid;
    mid  = search = L;

    while (search->next != NULL)
    {
        /* search 移动的速度时 mid 的2倍 */
        if (search->next->next != NULL)
        {
            /* code */
            search = search->next->next;
            mid = mid->next;
        } else {
            search = search->next;
        }
        
    }

    *e = mid->data;

    return OK;
    
}