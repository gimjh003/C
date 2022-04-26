#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char rule[8][11] = {"stple:0","4card:1","fhouse:2","flush:3","straight:4","triple:5","2pair:6","1pair:7"};
    int com[2], user[2], chip=10, bet, k;
    srand((unsigned)time(NULL));
    for(k=1; k<6; k++){
        com[0] = rand() % 13 + 1;
        user[0] = rand() % 13 + 1;
        com[1] = rand() % 8;
        user[1] = rand() % 8;
        printf("\nyou = [%d] %s", user[0], rule[user[1]]);
        printf("\tchip = %d BET(0 is fold) : ", chip);
        scanf("%d", &bet);
        printf("com = [%d] %s\n", com[0], rule[com[1]]);
        if(bet<=0 || bet>chip) continue;
        if(com[1]<user[1] || (com[1]==user[1] && com[0]>user[0])){
            chip -= bet;
            printf("\t\t\tCOMPUTER WIN! chip = %d\n", chip);
        } else{
            chip += bet;
            printf("\t\t\tUSER WIN! chip = %d\n", chip);
        }
        if(chip<=0) break;
    }
    return 0;
}