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
    char key[] = "ㅅㅏㄱㅗㅏ";
    char buffer[80];

    do {
        printf("%s",buffer);
        printf("내가 제일 좋아하는 과일은 무엇일까요?: ");
        fgets(buffer,80,stdin); // 반복 사용한다고 추가로 연산이 이뤄지지는 않는다.
        
    } while (strcmp(key, buffer) != 0);

    printf("맞았습니다!");
    return 0;
}

