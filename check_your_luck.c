#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int today_luck(int num){
    int k, luck=60, lkey;
    srand((unsigned)time(NULL));
    for(k=1;k<=20;k++){
        lkey = rand()%20+1;
        if(lkey != num){
            luck -= k;
            printf("luckey number : %d, %d point has gone, %d point remain\n", lkey, k, luck);
        } else break;
        system("timeout 2 > NULL");
    }
    return luck;
}
int main(){
    int point, key;
    printf("60point start, choose number(1~20) : ");
    scanf("%d", &key);
    point = today_luck(key);
    printf("\ntoday's luck : %d/60\n", point);
    return 0;
}