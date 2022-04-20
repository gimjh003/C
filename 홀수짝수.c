#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int com, user;
    int k, comwin=0, userwin=0;
    srand((unsigned)time(NULL));
    for(k=1;k<4;k++){
        com = rand()%2;
        printf("짝(0), 홀(1) 선택 : ");
        scanf("%d", &user);
        if(user==com){
            printf("맞췄네요! 사용자 %d승\n", ++userwin);
        }
        else{
            printf("틀렸네요! 컴퓨터 %d승\n", ++comwin);
        }
    }
    printf("\n사용자 %d승, 컴퓨터 %d승\n", userwin, comwin);
    return 0;
}