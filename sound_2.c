#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int times, jul, met, sound[60];
    srand((unsigned)time(NULL));
    for(times=0; times<200; times++){
        system("cls");
        for(met=0; met<60; met++){
            sound[met] = rand()%25; // range = 0~24
        }
        for(jul=24; jul>=0; jul--){ // top 24, bottom 0
            for(met=0; met<60; met++){ // print
                if(sound[met]>=jul){
                    printf("O");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}