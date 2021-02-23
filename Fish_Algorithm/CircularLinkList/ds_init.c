/* 初始化循环链表 */
#include <stdio.h>

void ds_init(node **pNode)
{
    int item;
    node *temp;
    node *target;

    printf("输入节点的值，输入0完成初始化\n");

    while (1)
    {
        /* code */
        scanf("%d", &item);
        // 清除缓冲区
        fflush(stdin);

        if (item == 0)
        {
            /* code */
            return;
        }

        if ((*pNode) == NULL) 
        {
            /* 循环链表中只有一个结点 */
            *pNode = (node*)malloc(sizeof(struct CLinkList));
            if (!(*pNode))
            {
                /* code */
                exit(0);
            }
            (*pNode)->data = item;
            (*pNode)->next = *pNode;
            
        }
        else
        {
            /* 找到 next 指向第一个节点的节点 */
            for(target = (*pNode); target->next != (*pNode); target = target->next);

            // 生成一个新的接点
            temp = (node *)malloc(sizeof(struct CLinkList));
        }
        
        
        
    }
    
}

