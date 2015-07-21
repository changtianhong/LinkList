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
    LinkList L = NULL;
    status status_init;
    
    status_init = InitLinkList(&L);  
    
    printf("Init status is %d\n",status_init);
    

}

