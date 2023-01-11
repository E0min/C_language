//
//  macro.c
//  전처리컴파일
//
//  Created by 이영민 on 2022/12/16.
//

#include <stdio.h>
#define LINUX
int main(void) {
#ifdef LINUX
    printf("리눅스 버전입니다. \n");
#else
    printf("윈도우 버전입니다. \n");
#endif
return 0;
    
}
