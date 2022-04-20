#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int com, user, k;
    int chip = 10, bet;
    srand((unsigned)time(NULL));
    for(k=1; k<6; k++){
        com = rand()%10+1;
        user = rand()%10+1;
        printf("\nchip=%d you=%d bet : ", chip, user);
        scanf("%d", &bet);
        if(bet<=0 || bet>chip) continue;
        if(com>user){
            chip -= bet;
            printf("COMPUTER WIN! chip = %d\n", chip);
        } else{
            chip += bet;
            printf("USER WIN! chip = %d\n", chip);
        }
        if(chip<=0) break;
    }
    return 0;
}