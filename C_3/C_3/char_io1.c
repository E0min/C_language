//
//  char_io1.c
//  C_3
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>

int main(void)
{
    int ch;        // 정수형이다.
    ch = getchar(); // 첫번째 문자를 입력받는다. 버퍼를 사용한다.
    putchar(ch);    // 문자를 출력한다.

    return 0;
}

