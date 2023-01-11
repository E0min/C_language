//
//  main.c
//  동적메모리할당
//
//  Created by 이영민 on 2022/12/05.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *p;
    p = (char*)malloc(sizeof(char));
    if(p == NULL){
        printf("메모리할당오류\n");
        exit(1);
    }
    *p = 'a';
    printf("%c",*p);
    free(p);
}
