#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int mine[30], chip = 0, m, k, bet;
    srand((unsigned)time(NULL));
    for(m=0; m<30; m++)
        mine[m] = rand()%30-30;
    for(k=5; k>0; k--){
        system("cls");
        for(m=0; m<30; m++) printf("%3d ", m); // print 0~29
        printf("\n\n");
        for(m=0; m<30; m++){
            if(mine[m] < 0) printf(" -- ");
            else printf("%3d ", mine[m]);
        }
        printf("\n\n%d remain, chip = %d, choose 0~29 : ", k, chip);
        scanf("%d", &bet);
        if(bet<0||bet>29||mine[bet]>0)
            continue;
        if(mine[bet] >= -22){
            mine[bet] += 30;
            chip += mine[bet];
        } else{
            printf("\nYOU DIED\n");
            break;
        }
    }
    printf("\n\ntotal chip = %d", chip);
    return 0;
}