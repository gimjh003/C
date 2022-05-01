#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int prob(int max){
    int pnum, k;
    pnum = rand()%(max*max*60); // pnum = 0~2939
    for(k=0; k<=max; k++) // 0~7 (rule)
        if(pnum<=k*k*60) // random number 0~2939 and rule 0, 60, 240, 540, 960, 1500, 2160, 2940 (if k++, big gap)
            return k;
}

int main(){
    char rule[8][11] = {"stple:0", "4card:1", "fhouse:2", "flush:3", "straight:4", "triple:5", "2pair:6", "1pair:7"};
    int com[2], user[2], chip=10, bet, k;
    srand((unsigned)time(NULL));
    while(1){
        com[0] = rand()%13+1;
        user[0] = rand()%13+1;
        com[1] = prob(7);
        user[1] = prob(7);
        printf("\nyou = [%d] %s", user[0], rule[user[1]]);
        printf("\tchip = %d bet(0 is fold) : ", chip);
        scanf("%d", &bet);
        printf("com = [%d] %s\n", com[0], rule[com[1]]);
        if(bet<=0||bet>chip) continue;
        if(com[1]<user[1] || (com[1]==user[1]&&com[0]>user[0])){
            chip -= bet;
            printf("\t\t\tcomputer win! chip = %d\n", chip);
        } else{
            chip += bet;
            printf("\t\t\tuser win! chip = %d\n", chip);
        }
        if(chip<=0||chip>=100) break;
    }
    return 0;
}