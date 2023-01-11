//
//  fgets.c
//  파일 입출력
//
//  Created by 이영민 on 2022/11/29.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp;
    char str[100];
    
    fp = fopen("file.txt","w");
    
    if(fp == NULL){
        fprintf(stderr, "file.txt를 열 수 없습니다.");
    }
    do{
        printf("입력하세요: ");
        fgets(str,100,stdin); //사용자로부터 한 줄을 입력받는다.
        printf("%s",str);
        fputs(str, fp); // 한 줄을 파일에 쓴다.
    }while(strlen(str) != 0);
    
    fclose(fp);
    return 0;
}
