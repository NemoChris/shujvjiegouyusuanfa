////
////  StackByLink.c
////  ShuJvJieGouYuSuanFa
////
////  Created by 吴珊 on 2018/4/30.
////  Copyright © 2018年 吴珊. All rights reserved.
////
//
//#include "StackByLink.h"
//
////构建一个堆栈头结点,返回指针
//LinkStack *CreateStack(void){
//    LinkStack *S;
//    S=(LinkStack*)malloc(sizeof(struct Node));
//    S->Next=NULL;
//    return S;
//}
////判断堆栈S是否为空,若为空则返回整数1，否则返回0
//int IsEmpty(LinkStack *S){
//    return S->Next==NULL;
//}
//void Push(char item,LinkStack *S){
//    struct Node *TmpCell;
//    TmpCell = (LinkStack*)malloc(sizeof(struct Node));
//    TmpCell->Element=item;
//    TmpCell->Next=S->Next;//Next指向栈顶元素
//    S->Next=TmpCell;//头指针Next指向TmpCell后TmpCell为栈顶元素
//}
//char Pop(LinkStack *S){
//    //删除并返回堆栈S的栈顶元素
//    struct Node *FirstCell;
//    char TopElement;
//    if (IsEmpty(S)) {
//        printf("堆栈空");
//        return ""[0];
//    }else  {
//        FirstCell=S->Next;
//        TopElement=FirstCell->Element;
//        S->Next=FirstCell->Next;
//        free(FirstCell);
//        printf("%c出栈成功\n",TopElement);
//        return TopElement;
//    }
//    
//}
