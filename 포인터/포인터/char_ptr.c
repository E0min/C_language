//
//  char_ptr.c
//  포인터
//  Created by 이영민 on 2022/10/17.

#include <stdio.h>

int main(void)
{
    char s1[] = "HelloWorld";
    char *p1 = "HelloWorld"; // 비추
    
    char s2[] = "Christmas";
    char *p2 = s2;

    s1[0] = 'h'; // 변경 가능하다.
    //p[0] = 'h' // 이 문장을 실행하면 프로그램의 작동이 중지된다.
    s2[0] = 'c';
    printf("%s\n",s2); //****
    p2[0] = 'C';       //****
    printf("%s\n",p2);


    printf("포인터가 가리키는 문자열 = %s \n", p1);
    p1 = "Goodbye";    // 이것은 가능하다.
    printf("포인터가 가리키는 문자열 = %s \n", p1);
    return 0;
}
