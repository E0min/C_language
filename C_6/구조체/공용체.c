//
//  공용체.c
//  C_구조체
//
//  Created by 이영민 on 2022/11/07.
//

#include <stdio.h>

union example{
    int i;
    char c;
};

int main(){
    union example data;
    
    data.c = 'A';
    printf("data.c:%c   data.i:%d\n", data.c, data.i);

    data.i = 10000;
    printf("data.c:%c   data.i:%d\n", data.c, data.i);
}
