#include <stdio.h>
#include <stdlib.h>
int main(){
    int min, sec;
    int limit, k;
    printf("min and sec : ");
    scanf("%d %d", &min, &sec);
    limit = min*60 + sec; // limit mean whole seconds
    for(k=limit;k>0;k--){
        system("timeout 1 > NULL");
        system("cls");
        sec -= 1;
        if(sec<0){
            sec = 59;
            min--;
        }
        printf("%d min %d sec\n", min, sec);
    }
    printf("STOP!!!");
    return 0;
}