#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int palja[40] = {0};
    int vic=0, m, k, user, pos;
    srand((unsigned)time(NULL));
    system("cls");
    for(k=5; k>0; k--){
        printf("Please wait (%d)", k);
        system("timeout /t 1 > NULL");
        system("cls");
    }
    for(k=0; k<5; k++){
        pos = rand() % 40;
        palja[pos] = 8;
        for(m=0; m<40; m++) printf("%2d ", m);
        printf("\n");
        for(m=0; m<40; m++) printf(" %d ", palja[m]);
        system("timeout /t 2 > NULL");
        system("cls");
        printf("Position of 8 : ");
        scanf("%d", &user);
        if(user==pos) printf("Nice! your score is %d now.\n\n", ++vic);
        else printf("So close! your score is %d now.\n\n", vic);
        palja[pos] = 0;
    }
    system("timeout /t -1");
    return 0;
}