//
//  f_puts.c
//  파일 입출력
//
//  Created by 이영민 on 2022/11/21.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    FILE *fp = NULL;
    fp = fopen("sample.txt", "a");
    
    if(fp == NULL){
        fprintf(stderr, "파일열기 실패");
        exit(1);
    }
    
    char c;
    for(c='a';c<='z';c++){
        fputc(c,fp);
    }
    fclose(fp);
}
