//
//  문자열 연결.c
//  포인터
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>
#include <string.h>

int main(){
    char s[12] = "Hello\n";
    strcat(s,"World"); // <string.h>헤더파일의 strcat함수는 문자열을 접합하는 기능을 수행한다. \n도 저장되는거 주의
    printf("%s \n",s);
    
    return 0;
}
