//
//  열거형.c
//  C_구조체
//
//  Created by 이영민 on 2022/11/07.
//

#include <stdio.h>

enum days{MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY};

char *days_name[] = {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};

int main(){
    
    enum days d;
    
    for(d = MONDAY;d<=SUNDAY;d++){
        printf("%d번째 요일은 %s이다.\n", d+1, days_name[d]);
    }
    
}
