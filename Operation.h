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
//insert node
//在L中第i个位置插入元素e
OPE_EXT status InsertNode(LinkList *L,int i,int e);
//删除L中第i个位置的元素，值返回到e
OPE_EXT status DeleteNode(LinkList *L, int i,int e);
//输出包括头节点在内的所有元素的值
OPE_EXT status PrintNode(LinkList L);


#endif
