//
//  fav_food.c
//  포인터
//
//  Created by 이영민 on 2022/10/17.
//
#include <stdio.h>
#include <string.h>

int main(void)
{
    char key[] = "사과";
    char buffer[80];

    do {
        printf("내가 제일 좋아하는 과일은 무엇일까요?: ");
        scanf("%s", buffer);
    } while (strcmp(key, buffer) != 0);

    printf("맞았습니다!");
    return 0;
}

