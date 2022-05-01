#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WTH 118
#define HGT 26

int main(){
    int k, jul, met, snow[WTH], *p = snow;
    srand((unsigned)time(NULL));
    for(met=0;met<WTH;met++)
        snow[met] = rand()%HGT-HGT;
    for(k=0;k<HGT*2;k++){
        system("cls");
        for(p=snow, met=0; met<WTH; met++, *p++)
            if(*p<HGT-1) (*p)++;
        for(jul=0;jul<HGT;jul++){
            for(p=snow, met=0;met<WTH;met++){
                if(*p++==jul){
                    printf("*");
                }else printf(" ");
            }
            printf("\n");
        }
        system("timeout /t 1 > NULL");
    }
    return 0;
}