#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int com, user;
    srand((unsigned)time(NULL));
    com = rand()%20+1;
    while(1){
        printf("1~20 : ");
        scanf("%d", &user);
        if(com==user){
            printf("correct\n");
            break;
        }
        else if(com>user)
            printf("more\n");
        else
            printf("less\n");
    }
    return 0;
}