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

    fp = fopen("alphabet.txt", "w");    // 파일을 쓰기 모드로 연다.
    if (fp == NULL) {
        fprintf(stderr, "파일이 제대로 열리지 못했습니다.\n");
        exit(1);    // 프로그램을 종료한다.
    }

    char c;
    for (c = 'a'; c <= 'z'; c++)     // a~z 까지 파일에 쓴다.
        fputc(c, fp);

    fclose(fp);
    return 0;
}
