//
//  char_io2.c
//  C_3
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>
#include <curses.h>

int main(void)
{
    char name[100];
    char address[100];
    
    printf("이름이 어떻게 되시나요?");
    fgets(name,99,stdin);
    
    printf("어디 사시나요");
    scanf("%s",address);
    
    puts(name);
    puts(address);
    printf("%s",name);
    printf("%s",address);
    
}
