//
//  typedef.c
//  C_구조체
//
//  Created by 이영민 on 2022/11/07.
//

#include <stdio.h>

typedef struct point{
    int x,y;
}POINT;

POINT translate(POINT p, POINT delta);

int main(){
    POINT p = {1,2};
    POINT delta = {3,4};
    POINT result;
    result = translate(p,delta);
    
    
}
POINT translate(POINT p,POINT delta){
    POINT new_p;
    new_p.x = p.x + delta.x;
    new_p.y = p.y + delta.y;
    return new_p;
}
