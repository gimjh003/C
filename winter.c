#include <stdio.h>
#include <stdlib.h>

#define WTH 118
#define HGT 26

int main(){
    int snow[WTH], k, jul, met;
    for(met=0; met<WTH; met++){
        snow[met] = rand() % HGT - HGT;
    }
    for(k=0; k<HGT*2; k++){
        system("cls");
        for(met=0; met<WTH; met++){
            if(snow[met] < HGT-1) snow[met]++;
        }
        for(jul=0; jul<HGT; jul++){
            for(met=0; met<WTH; met++){
                if(snow[met] == jul) printf("*");
                else printf(" ");
            }
            printf("\n");
        }
        system("timeout /t 1 > NULL");
    }
    return 0;
}