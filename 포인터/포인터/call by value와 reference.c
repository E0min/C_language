#include <stdio.h>
void modify_callbyvalue(int number) //함수의 매개변수에 인자의 값이 복사된다.
{
    number = 99;
}
void modify_callbyreference(int *number) //포인터변수를 매개변수로 하여, 함수의 매개변수에 인자의 주소값이 복사된다.
{
    *number = 99; //매개변수를 통해 받은 인자의 주소값에 담긴 값을 참조연산자 *을 이용하여 새로운 값은 배정하였다.
}
int main(int argc, const char * argv[]) {
    
    int number = 1;
    printf("number = %d\n",number); //
    
    modify_callbyvalue(number); // 인자값 복사
    printf("number = %d\n",number);
    
    modify_callbyreference(&number); // 인자주소 복사
    printf("number = %d\n",number);
    
    return 0;
}
