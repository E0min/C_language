//
//  malloc2.c
//  동적메모리할당
//
//  Created by 이영민 on 2022/12/05.
//

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *pi;
    pi = (int *)malloc(5 * sizeof(int));
    if (pi == NULL) {
        printf("메모리 할당 오류\n");
        exit(1); }
    *(pi) = 1; // p[0] = 1;
    *(pi + 1) = 2; // p[1] = 2;
    *(pi + 2) = 3; // p[2] = 3;
    *(pi + 3) = 4; // p[3] = 4;
    *(pi + 4) = 5; // p[4] = 5;
    
}
// pi[0] =1; // pi[1] =2; // pi[2] =3; // pi[3] =4; // pi[4] =5;
