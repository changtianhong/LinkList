/*************************************************************************
	> File Name: Operation.c
	> Author: 
	> Mail: 
	> Created Time: 2015年07月11日 星期六 09时32分22秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define OPERATION_LOCAL
#include"Operation.h"

//init empty link list
status InitLinkList(LinkList *L)
{
    *L = (LinkList)malloc(sizeof(LinkNode));

    if(*L == NULL)
        return FALSE;

    (*L)->data = 0;
    (*L)->next = NULL;
    
    return TRUE;
}

//insert node
//在L中第i个位置插入元素e
status InsertNode(LinkList *L,int i,int e)
{
    int j;
    LinkList p,s;

    p = *L;
    j = 1;

    while(p && j<i)
    {
        p = p->next;
        ++j;
    }

    if(!p || j>i)
        return FALSE;

    s = (LinkList)malloc(sizeof(LinkNode));
    s->data = e;
    s->next = p->next;
    p->next = s;

    (*L)->data++;

    return TRUE;
}

//删除L中第i个位置的元素，值返回到e
status DeleteNode(LinkList *L, int i,int e)
{
    int j;
    LinkList p,n;

    p = *L;
    j = 1;

    while(p && j<i)
    {
        p = p->next;
        ++j;
    }

    if(!p || j>i)
        return FALSE;

    n = p->next;
    e = n->data;
    p->next = n->next;

    (*L)->data--;

    return TRUE;
}

//输出包括头节点在内的所有元素的值
status PrintNode(LinkList L)
{
    int i=0;
    LinkList cur;
    
    cur = L;
    if(!cur->data)
        return FALSE;

    while(i <= L->data)
    {
        printf("%d ",cur->data);
        cur = cur->next;
        i++;
    }
    printf("\n");

    return TRUE;
}


