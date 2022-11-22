//
//  2_7_P2.c
//  C_구조체
//
//  Created by 이영민 on 2022/11/07.
//
/*
 두 개의 복소수 a+bi와 c+di의 덧셈 출력 :
 (a+bi)+(c+di)=(a+c)+(b+d)i
 복소수는 구조체를 사용하여 표현하고 복소수의 덧셈을 수행하는 함수 add_complex()를 정의해서 사용하시오.
 */

#include <stdio.h>

struct complex{
    int a,b;
};

struct complex complex_sum(struct complex x, struct complex y);

int main(){
    struct complex x ={1,4};
    struct complex y ={3,7};
    struct complex sum = complex_sum(x,y);
    printf("복소수의 합은 %d + %di",sum.a,sum.b);

    
}
struct complex complex_sum(struct complex x, struct complex y){
    struct complex sum;
    sum.a = x.a +y.a;
    sum.b = x.b +y.b;
    return sum;
}
