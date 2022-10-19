//
//  모음 삭제.c
//  C_3
//
//  Created by 이영민 on 2022/10/19.
//

#include <stdio.h>


int main(){
    char str[100];
    char cpy[100];
    
    int a=0,b=0;
    
    printf("문자를 입력하세요: ");
    fgets(str, 100, stdin);
    
    while(str[a] != '\0'){
        if((str[a] != 'a')&&(str[a] != 'i')&&(str[a] != 'o')&&(str[a] != 'e')&&(str[a] == 'u')){
            cpy[b] = str[a];
            b++;
            
        }
            a++;
        
    }
    
    cpy[b] = '\0';
    
    printf("%s",cpy);
}
