//
//  문자열 거꾸로.c
//  C_4
//
//  Created by 이영민 on 2022/10/17.

#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    
    printf("텍스트를 입력하세요: " );
    scanf("%s",input);
    
    int inputwords = strlen(input);
    
    for(int i=0; i<=inputwords; i++){
        printf("%c",input[inputwords-i]);
    }
    printf("\n");
    
}
