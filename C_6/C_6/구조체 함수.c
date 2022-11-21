//
//  구조체 함수.c
//  C_구조체
//
//  Created by 이영민 on 2022/11/07.
//

#include <stdio.h>

struct vector{
    float x;
    float y;
};

struct vector vectorsum(struct vector x, struct vector y);

int main(){
    struct vector a = {1.0,2,0};
    struct vector b = {1.0,2,0};
    struct vector sum = vectorsum(a,b);

}

struct vector vectorsum(struct vector x, struct vector y){
    struct vector sum;
    sum.x = x.x+y.x;
    sum.y = x.y+y.y;
    return sum;
}
