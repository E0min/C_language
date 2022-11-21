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
    struct student s = {32193287, "이영민", 4.3};
    struct student *p;
    p = &s;
    
    printf(" %d %s %f\n",(*p).number,(*p).name,(*p).grade);
    printf(" %d %s %f\n",s.number,s.name,s.grade);
    printf(" %d %s %f",p->number,p->name,p->grade);


}
