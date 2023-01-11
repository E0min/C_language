//
//  fgetc.c
//  파일 입출력
//
//  Created by 이영민 on 2022/11/29.
//
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp=NULL;
    fp = fopen("sample.txt","r");
    if(fp == NULL){
        fprintf(stderr,"파일열기실패");
        exit(1);
    }
    
    int c;// 정수임에 주의!!
    while((c=fgetc(fp)) != EOF)
        putchar(c);
    
    fclose(fp);
    
}
