//
//  dynamic_rand.c
//  동적메모리할당
//
//  Created by 이영민 on 2022/12/12.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(){
    int *a;
    a = (int *)malloc(SIZE*4);
    for(int i=0;i<SIZE;i++)
        a[i] = rand();
    
    int max = a[0];
    for(int i=0;i<SIZE;i++){
        if(max<a[i])
            max = a[i];
    }
    printf("MAX: %d",max);
}
