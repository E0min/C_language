//
//  main.c
//  C_6
//
//  Created by 이영민 on 2022/10/31.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main(void)
{

    struct student s;

    s.number = 20170001;
    strcpy(s.name, "홍길동"); // 배열의 이름은 배열의 첫번째 인덱스 시작점의 주소와 같다.
    s.grade = 4.3;

    printf("학번: %d\n", s.number);
    printf("이름: %s\n", s.name);
    printf("학점: %f\n", s.grade);

    return 0;
}

