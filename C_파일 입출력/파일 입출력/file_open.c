//
//  main.c
//  C_파일 입출력
//
//  Created by 이영민 on 2022/11/21.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp = NULL;

    fp = fopen("sample.txt", "w");
    if (fp == NULL)
        printf("파일 열기 실패");
    else
        printf("파일 열기 성공");

    fclose(fp);
    return 0;
}

