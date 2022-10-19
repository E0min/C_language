//
//  메뉴출력.c
//  포인터
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>

int main(void)
{
    int i;
    char menu[5][10] = {
        "init",
        "open",
        "close",
        "read",
        "write"
    };

    for (i = 0; i < 5; i++)
        printf("%d번째 메뉴: %s \n", i, menu[i]);

    return 0;
}
