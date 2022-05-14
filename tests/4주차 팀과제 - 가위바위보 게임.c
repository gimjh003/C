/*
    일자 : 2022-03-04
    제목 : 가위바위보 게임
    조원 : ***, ***, ***
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int c, p;
    srand((unsigned)time(NULL));
    c = rand()%3;
    printf("0 : 가위\n1 : 바위\n2 : 보\n숫자를 입력하세요 : ");
    scanf("%d", &p);
    if(c==p)
        printf("비겼습니다.\n");
    else if(p==0 && c==1)
        printf("내 패 : 가위\n컴퓨터 패 : 바위\n패배했습니다.\n");
    else if(p==0 && c==2)
        printf("내 패 : 가위\n컴퓨터 패 : 보\n이겼습니다.\n");
    else if(p==1 && c==2)
        printf("내 패 : 바위\n컴퓨터 패 : 보\n패배했습니다.\n");
    else if(p==1 && c==0)
        printf("내 패 : 바위\n컴퓨터 패 : 가위\n이겼습니다.\n");
    else if(p==2 && c==0)
        printf("내 패 : 보\n컴퓨터 패 : 가위\n패배했습니다.\n");
    else if(p==2 && c==1)
        printf("내 패 : 보\n컴퓨터 패 : 바위\n이겼습니다.\n");
    else
        printf("제대로 된 숫자를 입력해주세요.\n");
    return 0;
}