//
//  swap.c
//  C_구조체
//
//  Created by 이영민 on 2022/11/14.
//

#include <stdio.h>
#include <stdlib.h>

struct info {
    int x;
    int y;
};

void swap(struct info *x, struct info *y);

int main(){
    
    struct info a = {1,2};
    struct info b = {2,1};
    system("pause");
    swap(&a,&b);
    
    printf("%d %d",a.x, a.y);
    
    
    return 0;
    
}
void swap(struct info *x, struct info *y){
    struct info c;
    c = *x;
    *x = *y;
    *y = c;
}
