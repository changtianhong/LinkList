/*************************************************************************
	> File Name: Operation.h
	> Author: 
	> Mail: 
	> Created Time: 2015年07月11日 星期六 09时25分45秒
 ************************************************************************/

#ifndef _OPERATION_H
#define _OPERATION_H

#ifdef OPERATION_LOCAL
#define OPE_EXT 
#else
#define OPE_EXT extern
#endif

#define TRUE 1
#define FALSE 0

typedef char status;

typedef struct node
{
    int data;
    struct node *next;
}LinkNode,*LinkList;


//init empty link list
OPE_EXT status InitLinkList(LinkList *L);


#endif
