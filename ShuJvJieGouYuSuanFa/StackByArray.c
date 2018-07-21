////
////  StackByArray.c
////  ShuJvJieGouYuSuanFa
////
////  Created by 吴珊 on 2018/4/30.
////  Copyright © 2018年 吴珊. All rights reserved.
////
//
//#include "StackByArray.h"
//
////生成空堆栈
//stack CreateStack(void){
//    stack PtrS =
//    {
//        .Top = -1,
//        .Data = {""},//只初始化数组第一项,其余会自动赋初始值。
//    };
//    return PtrS;
//}
////判断堆栈是否已满
//int IsFull(stack *PtrS){
//    return PtrS->Top==MaxSize-1 ? 1 : 0;
//}
////判断堆栈是否为空
//int isEmpty(stack *PtrS){
//    return PtrS->Top==-1 ? 1 : 0;
//}
////入栈
//void Push(stack *PtrS,char item){
//    if(IsFull(PtrS)){
//        printf("堆栈满\n");
//    }else{
//        PtrS->Data[++(PtrS->Top)]=item;
//        printf("元素%c进栈成功，栈顶位置%d\n",item,PtrS->Top);
//        return;
//    }
//}
////出栈
//char Pop(stack *PtrS){
//    if (isEmpty(PtrS)) {
//        printf("堆栈空\n");
//        return -1;
//    }else {
//        int popItem=PtrS->Data[(PtrS->Top)--];
//        printf("元素%c出栈成功，栈顶位置%d\n",popItem,PtrS->Top);
//        return popItem;
//    }
//}
