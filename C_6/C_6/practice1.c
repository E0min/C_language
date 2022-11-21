//
//  practice1.c
//  C_구조체
//
//  Created by 이영민 on 2022/10/31.
//

#include <stdio.h>

struct Product{
    char product[100];
    int amount;
    int price;
    int total_price;
};

int main(){
    struct Product list[3];
    
    for(int i = 0; i<sizeof(list)/sizeof(list[0]); i++){
        printf("%d번째 품목의 품목, 수량, 가격 입력: ",i);
        scanf("%s %d %d",&(list[i].product),&(list[i].amount),(&list[i].price));
        list[i].total_price = (list[i].price)*(list[i].amount);
    }
    
    printf("[품목 3개의 수량, 단가, 가격 출력]\n");
    printf("%10s%10s%10s%10s\n","품목","수량","단가","금액");
    for(int i = 0; i<sizeof(list)/sizeof(list[0]); i++){
        printf("%10s%10d%10d%10d\n",list[i].product,list[i].amount,list[i].price,list[i].total_price);
    }
    
}
