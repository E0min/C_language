//  Swap.c
//  포인터
//  Created by 이영민 on 2022/09/27

#include <stdio.h>

void swap_value(int a,int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void swap_reference(int *a,int *b){ // 매개변수는 인자바
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    
    int a = 10;
    int b = 20;
    
    printf("a는 %d\n",a);
    printf("b는 %d\n",b);
    
    swap_value(a,b);
    printf("a는 %d\n",a);
    printf("b는 %d\n",b);

    
    swap_reference(&a,&b);
    printf("a는 %d\n",a);
    printf("b는 %d\n",b);

}
