//
//  문자등장횟수.c
//  C_3
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char strchk[200] = {0};
    printf("문자를 입력하세요: ");
    fgets(str,100,stdin);
    printf("%s",str);
    
    for(int i=0;i<strlen(str);i++){
        for(int k = 'A';k< 'z';k++) // 정수형에 문자넣으면 아스키코드값이 알아서 저장된다.
            if(str[i]==k)
                strchk[k]++;
    }
    /*
     for (i = 0; i < strlen(s); i++)
         freq[s[i]]++;
     for (i = 'a'; i <= 'z'; i++)
         if (freq[i] != 0)
             printf("%c πÆ¿⁄∞°  %dπ¯ µÓ¿Â«œø¥¿Ω!\n", i, freq[i]);
     */
    for(int i = 0;i<200;i++ ){
        if(strchk[i]!=0)
            printf("문자%c는 %d번 나옴\n",i,strchk[i]);
    }
        
        
    
}
