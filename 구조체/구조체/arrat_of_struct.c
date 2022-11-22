//
//  arrat_of_struct.c
//  C_구조체
//
//  Created by 이영민 on 2022/11/07.
//

#include <stdio.h>
#define SIZE 3

struct student{
    int number;
    char name[20];
    double grade;
};

int main(){
    
    struct student list[SIZE];

    for(int i = 0; i<SIZE ; i++){
        printf("학번을 입력하세요: ");
        scanf("%d",&list[i].number);
        printf("이름을 입력하세요: ");
        scanf("%s",&list[i].name);
        printf("학점을 입력하세요: ");
        scanf("%lf",&list[i].grade);
    }
    printf("\n=================================================\n");
    for (int i = 0; i < SIZE; i++)
        printf("학번: %d, 이름: %s, 학점: %f\n", list[i].number, list[i].name, list[i].grade);
    printf("=================================================\n");
    return 0;
}
