//
//  구조체 포인터.c
//  C_구조체
//
//  Created by 이영민 on 2022/11/07.
//

#include <stdio.h>

struct student{
    int number;
    char name[20];
    double grade;
};

int main(){
    struct student a = {32193287, "이영민", 4.5};
    struct student *p = &a;
    
    printf("학번 =%d , 이름 = %s , 학점 = %lf",(*p).number,(*p).name, (*p).grade);

}
