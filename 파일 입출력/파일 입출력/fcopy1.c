//
//  fcopy1.c
//  파일 입출력
//
//  Created by 이영민 on 2022/11/29.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp1, *fp2;
    char file1[100], file2[100];
    char buffer[100];
    
    printf("원본 파일 이름: ");
    scanf("%s",file1);
    
    printf("복사 파일 이름: ");
    scanf("%s",file2);
    
    // 첫번째 파일을 읽기모드로 연다.
    fp1 = fopen(file1,"r");
    if(fp1==NULL){
        fprintf(stderr, "원본 파일 %s을 열 수 없습니다.",file1);
        exit(1);
    }
    
    //두번째 파일을 쓰기모드로 연다.
    if((fp2=fopen(file2, "w"))==NULL){
        fprintf(stderr, "복사 파일 %s을 열 수 없습니다.",file2);
        exit(1);
    }
    
    // 한글자씩 옮겨적기
    int c;
    while((c=fgetc(fp1)) != EOF)
        fputc(c,fp2);
    
    fclose(fp1);
    fclose(fp2);
    
    


    
}
