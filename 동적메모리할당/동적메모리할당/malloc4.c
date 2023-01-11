//
//  malloc4.c
//  동적메모리할당
//
//  Created by 이영민 on 2022/12/05.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book {
    int number;
    char title[100];
};
int main(void) {

    struct Book *p;
    p = (struct Book *)malloc(2 * sizeof(struct Book));
    if (p == NULL) {
        printf("메모리 할당 오류\n");
        exit(1);
    }
    p[0].number = 1; // (*p).number = 1
    // p[0].title[100] = "C Programming"; 이렇게 하면 안된다. 
    p[1].number = 2; // (*p+1).number = 2
    strcpy(p[1].title, "Data Structure \n");
    
    printf("%s",p[0].title);
    free(p);
}
