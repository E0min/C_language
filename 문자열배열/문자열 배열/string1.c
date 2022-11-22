//
//  main.c
//  C_3
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str1[6] = "seoul"; // s e o u l \0 이렇게 총 6개의 공간이 필요하다.
    char str2[3] = {'i','s','\0'};
    char str3[] = "the capital city of seoul";
    
    printf("%s %s %s\n",str1,str2,str3);
    
}
