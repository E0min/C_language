//
//  문자열 수치로 변환.c
//  포인터
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    double d;

    i = atoi("100"); // 문자열을 정수로 변환
    printf("%d \n", i);

    d = atof("36.5"); // 문자열을 실수로 변환
    printf("%f \n", d);
    return 0;
}
