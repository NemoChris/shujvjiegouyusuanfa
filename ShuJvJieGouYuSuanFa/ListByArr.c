////
////  ListByArr.c
////  ShuJvJieGouYuSuanFa
////
////  Created by 吴珊 on 2018/5/12.
////  Copyright © 2018年 吴珊. All rights reserved.
////
//
//#include "ListByArr.h"
//
////初始化创建空的顺序表
//List *MakeEmpty(){
//    List *PtrL;
//    PtrL = (List*)malloc(sizeof(List));
//    PtrL->Last=-1;
//    return PtrL;
//}
////查找
//int Find(int toFind,List *PtrL){
//    int i=0;
//    //循环退出有两种情况 一：整个循环完毕，还没有查找到元素。 二：查找到元素了。
//    while(i<=PtrL->Last&&PtrL->Data[i]!=toFind)
//        i++;
//    if (i>PtrL->Last)
//        return -1;
//    else
//        return i;
//}
////插入
//void Insert(int insertEle,int index,List *PtrL){
//    int j;
//    if (PtrL->Last==MaxSize-1) {
//        printf("表满");
//        return;
//    }
//    if (index<0||index>PtrL->Last+1) {
//        printf("位置不合法");
//        return;
//    }
//    //将Ai~An倒序向后移动
//    for(j=PtrL->Last;j>=index;j--)
//        PtrL->Data[j+1]=PtrL->Data[j];
//    PtrL->Data[index]=insertEle;//新元素插入
//    PtrL->Last++;//Last指向线性表最后的位置
//}
////删除操作
//void Delete(int index,List *PtrL){
//    int j;
//    if (index<0||index>PtrL->Last) {
//        printf("不存在下标为%d的元素",index);
//        return;
//    }
//    //将Ai+1~An顺序向前挪动
//    for(j=index;j<=PtrL->Last-1;j++)
//        PtrL->Data[j]=PtrL->Data[j+1];
//    PtrL->Last--;//Last指向线性表最后位置
//}
//
