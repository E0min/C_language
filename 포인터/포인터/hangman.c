//
//  hangman.c
//  포인터
//
//  Created by 이영민 on 2022/10/17.
//

#include <stdio.h>
#include <string.h>
#include <curses.h>

int main(void) {
    char solution[100] = "meet at midnight";    //
    char answer[100] = "____ __ ________";    //
    char ch;
    int i;

    while (1) {
        printf("\n문자열을 입력하세요: %s \n", answer);
        printf("글자를 추측하게요: ");
        ch = getch();

        for (i = 0; solution[i] != NULL ; i++) {
            if (solution[i] == ch)
                answer[i] = ch;
        }
        if (strcmp(solution, answer) == 0) break;
    }
    return 0;
}
