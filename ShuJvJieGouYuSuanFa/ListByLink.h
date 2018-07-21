//
//  ListByLink.h
//  ShuJvJieGouYuSuanFa
//
//  Created by 吴珊 on 2018/5/12.
//  Copyright © 2018年 吴珊. All rights reserved.
//

#ifndef ListByLink_h
#define ListByLink_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int Data;
    struct Node *Next;
}List;
//求表长
int Length(List *PtrL);
//按序号查找
List *FindKth(int K,List *PtrL);
//按值查找
List *Find(int x,List *PtrL);
//插入
List *InsertOrCreate(int x,int i,List *PtrL);
//删除
List *Delete(int i,List *PtrL);
#endif /* ListByLink_h */
