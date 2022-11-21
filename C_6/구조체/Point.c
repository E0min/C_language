//
//  Point.c
//  C_구조체
//
//  Created by 이영민 on 2022/10/31.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main(void)
{
    struct point p1, p2;
    int xdiff, ydiff;
    double dist;

    printf("p1의 좌표를 찍으세요(x  y): ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("p2의 좌표를 찍으세요(x  y): ");
    scanf("%d %d", &p2.x, &p2.y);

    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    dist = sqrt(xdiff * xdiff + ydiff * ydiff);

    printf("두 점 사이의 거리는 %f입니다.\n", dist);

    return 0;
}
