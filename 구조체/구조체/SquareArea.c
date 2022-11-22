//
//  SquareArea.c
//  C_구조체
//
//  Created by 이영민 on 2022/10/31.
//

#include <stdio.h>
#include <stdlib.h>
struct point{
    int x;
    int y;
};

struct recArea{
    struct point p1;
    struct point p2;
    
};

int main(){
    struct recArea r;
    int w,h,area;
    
    printf("왼쪽 상단의 점 입력: ");
    scanf("%d %d",&r.p1.x, &r.p1.y);
    printf("오른쪽 하단의 점 입력: ");
    scanf("%d %d",&r.p2.x, &r.p2.y);
    
    w = r.p2.x - r.p1.x;
    h = r.p1.y - r.p1.y;
    area = w*h;
    
    printf("넓이는 %d ",area);
    
    

}
