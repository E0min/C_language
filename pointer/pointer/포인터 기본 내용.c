//
//  main.c
//  pointer
//
//  Created by 이영민 on 2022/09/27.
//

#include <stdio.h>

int main() {
    int number = 10; // number가 메모리에 저장되었다.
    printf("%d \n",&number); // &주소연산자를 통해 메모리상 number의 주소 출력한다.

    int *p; // 포인터변수 p를 선언하였다. 포인터 변수에는 특정 변수의 메모리값이 있는 '주소'를 저장하는 곳이다.
    p = &number; // 주소연산자 &을 이용하여 얻은 number의 주소를 포인터 변수 p에 저장하였다.
    printf("%d \n",*p); // 참조연산자*을 이용하여 포인터 변수p에 배정된 주소에 어떤 값이 담겨있는지 출력하였다.
    printf("%d \n",&p); // 주소연산자&d을 이용하여 포인터 변수 p의 주소를 출력하였다.
    
    
    
    
}
