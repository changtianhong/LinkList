/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2015年07月11日 星期六 09时24分45秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"Operation.h"

void main()
{
    int i,j=0;
    LinkList L = NULL;
    status status_init;
    
    status_init = InitLinkList(&L);  
    printf("Init status is %d\n",status_init);
    
    printf("输入插入元素数量: ");
    scanf("%d",&i);
    while(j++ < i)
        status_init &= InsertNode(&L,j,j); 
    printf("Init status is %d\n",status_init);
    
    status_init = PrintNode(L); 
    printf("Init status is %d\n",status_init);

}

