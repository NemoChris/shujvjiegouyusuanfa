//
//  ListByLink.c
//  ShuJvJieGouYuSuanFa
//
//  Created by 吴珊 on 2018/5/12.
//  Copyright © 2018年 吴珊. All rights reserved.
//

#include "ListByLink.h"
//求表长
int Length(List *PtrL){
    List *p=PtrL;//p指向表的第一个节点
    int j=0;
    while (p) {
        p=p->Next;
        j++;
    }
    return j;
}
//按序号查找
List *FindKth(int K,List *PtrL){
    List *p=PtrL;//p指向表的第一个节点
    int i=1;
    while (p!=NULL&&i<K) {
        p=p->Next;
        i++;
    }
    if (i==K) return p;
    else return NULL;
}
//按值查找
List *Find(int x,List *PtrL){
    List *p=PtrL;
    while (p!=NULL && p->Data!=x) {
        p=p->Next;
    }
    return p;
}
//插入或创建
List *InsertOrCreate(int x,int i,List *PtrL){
    List *p,*s;
    if (i==1) {
        s=(List*)malloc(sizeof(List));
        s->Data=x;
        s->Next=PtrL;
        return s;//返回头结点
    }
    p=FindKth(i-1, PtrL);
    if (p==NULL) {
        printf("参数错");
        return NULL;
    }else   {
        s=(List*)malloc(sizeof(List));
        s->Data=x;
        s->Next=p->Next;
        p->Next=s;
        return PtrL;//返回头节点，头结点不变
    }
}
//删除
List *Delete(int i,List *PtrL){
    List *p,*s;//s指向删除的节点 p指向s的前一个节点
    if (i==1) {
        s=PtrL;
        if(PtrL!=NULL) PtrL=PtrL->Next;
        else return NULL;
        free(s);
        return PtrL;
    }
    p=FindKth(i-1, PtrL);
    if (p==NULL) {
        printf("第%d个节点不存在",i-1);
        return NULL;
    }else if(p->Next==NULL){
        printf("第%d个节点不存在",i);
        return NULL;
    }else   {
        s=p->Next;
        p->Next=s->Next;
        free(s);
        return PtrL;
    }
}











