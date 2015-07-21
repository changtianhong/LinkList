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
status InsertNode(LinkList *L,int i)
{
    
}
