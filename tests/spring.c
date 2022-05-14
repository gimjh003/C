#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int flw[59], k, jul, met;
    srand((unsigned)time(NULL));
    for(met=0; met<59; met++){ // 꽃마다 정해진 높이가 있다. (0~25, 단 낮을수록 높다)
        flw[met] = rand() % 26;
    }
    for(k=25; k>=0; k--){ // 꽃이 피는 과정을 나타낸다. (매번 달라지는 값)
        system("cls");
        for(jul=0; jul<26; jul++){ // 현재 성장도를 그린다. (범위는 0~25로 꽃의 정해진 높이의 범위와 동일하다)
            for(met=0; met<59; met++){
                if(flw[met]+k == jul) printf(" @"); // 줄어드는 k의 값과 고유 높이를 더해서 줄과 같다면 꽃을 출력한다. (가장 낮은 곳이 25, 따라서 높이가 0일 경우 가장 낮은 곳에 잎이 그려진다)
                else if(flw[met]+k < jul) printf(" |"); // 줄어드는 k의 값과 고유 높이를 더해서 줄보다 작다면 줄기를 출력한다.
                else printf("  ");
            }
            printf("\n");
        }
        system("timeout /t 2 > NULL"); // 시간이 지나면서 k값이 작아질수록 높이 값이 큰 꽃 송이가 나중에 등장하게 된다(25와 같거나 작아야만 출력이 되고 이외의 경우에는 출력하지 않는다.)
    }
    return 0;
}