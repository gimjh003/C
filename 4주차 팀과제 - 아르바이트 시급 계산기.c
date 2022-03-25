/*
    일자 : 2022-03-24
    제목 : 아르바이트 시급 계산기
    조원 : ***, ***, ***
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
    int time, money=0, pay=12800, bob=9000;
    float under40 = 0.02, over40 = 0.1;
    printf("일한 시간을 입력하세요 : ");
    scanf("%d", &time);
    money += time/4*bob;
    money += time*pay;
    if(time<40)
        money += money*under40;
    else
        money += money*over40;
    printf("총 수입 : %d\n", money);
    return 0;
}