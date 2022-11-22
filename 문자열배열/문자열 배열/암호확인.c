//
//  암호확인.c
//  C_4
//
//  Created by 이영민 on 2022/10/17.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    //숫자: 48~57
    //대문자: 65~90
    //소문자: 97~122
    while(1){
        char pw[100];
        printf("암호를 생성하세요: ");
        fgets(pw, 100, stdin);
        int UP = 0;
        int LO = 0;
        int NUM = 0;
        for(int i =0; i<strlen(pw);i++){
            if(('0'<pw[i])&&(pw[i]<'9'))
                NUM++;
            else if(('A'<pw[i])&&(pw[i]<'Z'))
                UP++;
            else if(('a'<pw[i])&&(pw[i]<'z'))
                LO++;
        }
        
        if((UP!=0)&&(LO!=0)&&(NUM!=0)){
            printf("적정한 암호");
            break;
        }
        else
            printf("암호를 다시 만드세요\n");
        
        }
    
}
