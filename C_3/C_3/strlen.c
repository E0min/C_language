//
//  문자열 길이.c
//  C_3
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "abcdefgh";
    int len = strlen(s);
    printf("문자열 %s의 길이 = %d \n", s, len);
    return 0;
}
