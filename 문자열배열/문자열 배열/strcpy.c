//
//  strcpy.c
//  C_3
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hello";
    char dst[6];

    strcpy(dst, src); //dst에 src를 복사
    printf("복사된 문자열 = %s \n", dst);
    return 0;
}

