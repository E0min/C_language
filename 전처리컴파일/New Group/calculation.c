//
//  calculation.c
//  전처리컴파일
//
//  Created by 이영민 on 2022/12/19.
//

#include <stdio.h>
#include "add.h"

int main(){
    
    double x,y;
    printf("입력 : ");
    scanf("%lf",&x);
    printf("입력 : ");
    scanf("%lf",&y);
    printf("합: %lf",add(x,y));

}
