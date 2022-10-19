//
//  한영사전.c
//  포인터
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>
#include <string.h>
#define WORDS 5

int main(void)
{
    int i, index;
    char dic[WORDS][2][30] = {
    { "book", "책" },
    { "boy", "소년" },
    { "computer", "컴퓨터" },
    { "language", "언어" },
    { "rain", "비" },
    };
    
    char word[30];
    printf("단어를 입력하세요: ");
    scanf("%s", word);
    
    index = 0;
    for (i = 0; i < WORDS; i++)
    {
        if (strcmp(dic[index][0], word) == 0)
        {
            printf("%s: %s\n", word, dic[index][1]);
            return 0;
        }
        index++;
    }
    printf("사전에서 발견되지 않았습니다.\n");

    return 0;
}
