//
//  pointer_arith1.c
//  포인터
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>

int main(void)
{
    char a = "안녕하세요";
    int b=2;
    double c=8;
    
    char *pc = &a;
    int *pi = &b;
    double *pd = &c;


    printf("증가 전 pc = %d,  pi = %d,  pd = %d\n", pc, pi, pd);

    pc++;
    pi++;
    pd++;
    printf("증가 후 pc = %d,  pi = %d,  pd = %d\n", pc, pi, pd);
    printf("pc+2 = %d,  pi+2 = %d,  pd+2 = %d\n", pc+2, pi+2, pd+2);

    return 0;
}
