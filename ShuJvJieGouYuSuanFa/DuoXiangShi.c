////
////  DuoXiangShi.c
////  ShuJvJieGouYuSuanFa
////
////  Created by 吴珊 on 2018/4/8.
////  Copyright © 2018年 吴珊. All rights reserved.
////
//
//
//#include "DuoXiangShi.h"
//
////暴力加法算法，简单好懂
////n 最大系数
////a[] 自然数
////x的值
//double f1(int n,double a[],double x){
//    double result=a[0];
//    for (int i=1;i<n ; i++) {
//        result = result+a[i]*pow(x, i);
//    }
//    return result;
//}
//
////公因式乘法，效率比加法好
////n 最大系数
////a[] 自然数
////x未知数的值
//double f2(int n,double a[],double x){
//    double result=0;
//    for (int i=n; i>0; i--) {
//        result=a[i-1]+x*result;
//    }
//    return result;
//
//}
//
////暴力加法算法，简单好懂
////n 最大系数
////a[] 自然数
////x的值
//double f3(int n,double a[],double x){
//    double result=a[0];
//    for (int i=1;i<n ; i++) {
//        result += a[i]*pow(x, i)/i;
//    }
//    return result;
//}
//
////公因式乘法，效率比加法好
////n 最大系数
////a[] 自然数
////x未知数的值
//double f4(int n,double a[],double x){
//    double result=0;
//    for (int i=n; i>0; i--) {
//        result=a[i-1]+x*result/i;
//    }
//    return result;
//
//}
//
//
//
//void DuoXiangShiStart(){
//    double a[MAXN];
//    //clock()捕捉程序从运行开始到clock()调用时所耗费的时间，clock_t为其数据类型(单位)
//    clock_t start,stop;
//    double duration;
//    //初始化自然数a集合
//    for (int i=0; i<MAXN; i++) {
//        a[i] = i;
//        printf("%f\n",a[i]);
//    }
//
//    //计算多项式的值 = 84.062575
//    start=clock();//main()程序开始到这里运行的时间
//    //单次运行的时间太短，用重复执行的方法获取时间。
//    for (int i=0; i<MAXK; i++) {
//        f1(MAXN,a,XVALUE);
//    }
//    //double resultF1 = f1(MAXN,a,XVALUE);
//    //printf("resultF1=%f\n",resultF1);
//
//    stop=clock();//main()程序开始到次数的运行时间
//    //CLK_TCK为机器每分钟所走的时钟打点数，此变量存放程序运行时间
//    duration=((double)(stop-start))/CLK_TCK/MAXK;
//    printf("Ticks1=%f\n", (double)(stop-start));
//    printf("Time1=%6.2e\n",duration);
//
//    start=clock();
//    for (int i=0; i<MAXK; i++) {
//        f2(MAXN,a,XVALUE);
//    }
//    stop=clock();
//    duration=((double)(stop-start))/CLK_TCK/MAXK;
//    printf("Ticks2=%f\n",(double)(stop-start));
//    printf("Time2=%6.2e\n",duration);
//}
//
//void DuoXiangShiStartTwo(){
//    double a[MAXN];
//    //clock()捕捉程序从运行开始到clock()调用时所耗费的时间，clock_t为其数据类型(单位)
//    clock_t start,stop;
//    double duration;
//    //初始化自然数a集合
//    for (int i=1; i<MAXN; i++) {
//        a[i] = i;
//        printf("%f\n",a[i]);
//    }
//
//    //计算多项式的值 = 84.062575
//    start=clock();//main()程序开始到这里运行的时间
//    //单次运行的时间太短，用重复执行的方法获取时间。
//    for (int i=0; i<MAXK; i++) {
//        f3(MAXN,a,XVALUE);
//    }
//
//    stop=clock();//main()程序开始到次数的运行时间
//    //CLK_TCK为机器每分钟所走的时钟打点数，此变量存放程序运行时间
//    duration=((double)(stop-start))/CLK_TCK/MAXK;
//    printf("Ticks1=%f\n", (double)(stop-start));
//    printf("Time1=%6.2e\n",duration);
//
//    double resultF3 = f3(MAXN,a,XVALUE);
//    printf("resultF1=%f\n",resultF3);
//
//    start=clock();
//    for (int i=0; i<MAXK; i++) {
//        f4(MAXN,a,XVALUE);
//    }
//    stop=clock();
//    duration=((double)(stop-start))/CLK_TCK/MAXK;
//    printf("Ticks2=%f\n",(double)(stop-start));
//    printf("Time2=%6.2e\n",duration);
//
//    double resultF4 = f4(MAXN,a,XVALUE);
//    printf("resultF4=%f\n",resultF4);
//}
//
