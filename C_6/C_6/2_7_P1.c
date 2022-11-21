//
//  2_7_P1.c
//  C_구조체
//
//  Created by 이영민 on 2022/11/07.
//
/*
 직원을 나타내는 구조체 employee가 사번(정수), 이름(문자열), 전화번호(문자열), 나이(정수) 등으로 구성된다.
 구조체 배열을 선언하고 5명의 데이터를 입력받아
 이 중 나이가 20 이상 30 이하인 직원의 이름을 찾아서 출력하시오
 */
#include <stdio.h>

struct employee{
    int number;
    char name[10];
    int ph;
    int age;
};

int main(){
    struct employee list[5];
    
    for(int i=0;i<5;i++){
        printf("사번: ");
        scanf("%d",&list[i].number);
        printf("이름: ");
        scanf("%s",list[i].name);
        printf("전화번호: ");
        scanf("%d",&list[i].ph);
        printf("나이: ");
        scanf("%d",&list[i].age);
    }
    
    for(int i=0;i<5;i++){
        if((list[i].age>=20)&&(list[i].age)<=30){
            printf("%s\n",list[i].name);
        }
    }
    
}

