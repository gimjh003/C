#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int com, user;
    srand((unsigned)time(NULL));
    com = rand()%3;
    printf("scissors(0), rock(1), paper(2) : ");
    scanf("%d", &user);
    printf("computer : %d, user : %d\n", com, user);
    if(com==user){
        printf("DRAW\n");
    }
    else if((com-user+2)%3){
        printf("USER WIN\n");
    }
    else{
        printf("COMPUTER WIN\n");
    }
    return 0;
}