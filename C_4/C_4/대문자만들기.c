//
//  main.c
//  C_4
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>
#include <string.h>


int main() {
    char input[100];
    printf("대문자로 출력: ");
    fgets(input,100,stdin);
    
    for(int i = 0; i < strlen(input) ;i++){
        if((input[i]>= 'a')&&(input[i])<= 'z'){
            input[i] = input[i] - 32;
        }
    }
    printf("%s",input);
    
}
    
