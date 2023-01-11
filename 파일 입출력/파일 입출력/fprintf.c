//
//  fprintf.c
//  파일 입출력
//
//  Created by 이영민 on 2022/12/12.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    FILE *fp;
    fp = fopen("abc.txt","a");
    if(fp ==NULL){
        fprintf(stderr, "제대로열리지않아 종료");
        exit(0);
    }
    
    
    
}
