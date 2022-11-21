//
//  main.c
//  C_practice
//
//  Created by 이영민 on 2022/11/21.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS


int main(int argc, const char * argv[]) {

    int *p;
    int i=0;
    
    p = (int*)malloc(sizeof(int)*5);
    
    
    while(i<20){
        
        scanf("%d ",p[i]);
        if(p[i]== -1)
            break;
    
            
    }
    

}
