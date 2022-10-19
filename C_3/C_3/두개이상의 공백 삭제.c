//
//  두개이상의 공백 삭제.c
//  C_3
//
//  Created by 이영민 on 2022/10/18.
//

#include <stdio.h>

int main(){
    char str[100];
    char str1[100];
    
    printf("문자를 입력하세요: ");
    fgets(str, 100, stdin);
    
    int i = 0;
    int c = 0;
    
    while(str[i] != '\0'){
        if(!(str[i]==' '&&str[i+1]==' ')){
            str1[c] = str[i];
            c++;
        }
        i++;
    }
    
    str1[c] = '\0';
    
    printf("\n %s",str1);

}
