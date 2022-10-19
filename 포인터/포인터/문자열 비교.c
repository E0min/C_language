//
//  문자열 비교.c
//  포인터
//
//  Created by 이영민 on 2022/10/17.
//

#include <string.h>
#include <stdio.h>

int main(void)
{
    char s1[80];    // 첫번째 단어 저장공간
    char s2[80];    // 두번째 단어 저장공간
    int result;

    printf("첫번째 단어를 입력하세요");
    scanf("%s", s1); //배열의 이름은 주소
    printf("두번째 단어를 입력하세요");
    scanf("%s", s2); //배열의 이름은 주소

    result = strcmp(s1, s2); // string.h 헤더파일에 있는 문자배열의 사전순대로 비교하는 함수
    if (result < 0)
        printf("%s가 %s보다 앞에 있습니다..\n", s1, s2);
    else if (result == 0)
        printf("%s와 %s는 같은 글자입니다.\n", s1, s2);
    else
        printf("%s는 %s보다 뒤에 있습니다.\n", s1, s2);
    return 0;
}
