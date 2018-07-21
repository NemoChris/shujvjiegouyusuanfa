//
//  demo.c
//  ShuJvJieGouYuSuanFa
//
//  Created by 吴珊 on 2018/4/8.
//  Copyright © 2018年 吴珊. All rights reserved.
//

#include "demo.h"

void countA(){
    for (int i=10000; i>0; i--) {
        printf("%d\n",i);
    }
}

void countB(int n){
    if (n) {
        printf("%d\n",n);
        n--;
        countB(n);
    }
}
