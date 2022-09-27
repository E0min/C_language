//
//  main.c
//  string&char
//
//  Created by 이영민 on 2022/09/26.
//

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100]={0}; // 문자열이 저장될 배열
    int freq[255]={0}; // 아스키 코드값을 인덱스로 하여 횟수 증가를 받을 배열
    
    printf("영문자를 입력하세요.");
    scanf("%s", str);

    for(int i=0;i<strlen(str);i++) //문자열을 전부 체크하도록 반복
    {
        freq[str[i]]++; // str에 담긴 문자열의 아스키코드 정수값을 freq 배열의 인덱스로 삼아 횟수 증가
    }
    
    
        
    for(int i =65;i<124;i++)
        if(freq[i]>0)
            printf("%c는 %d번\n",i,freq[i]);
    
//OR
    
    for(int i ='0';i<'z';i++)
        if(freq[i]>0)
            printf("%c는 %d번\n",i,freq[i]);


}
