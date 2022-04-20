#include <stdio.h>
#include <stdlib.h>
int main(){
    int min, sec;
    printf("minutes and seconds : ");
    scanf("%d %d", &min, &sec);
    for(;min>=0;min--){
        for(;sec>=0;sec--){
            system("cls");
            printf("%d min %d sec left\n", min, sec);
            system("timeout 1 > NULL");
        }
        sec += 59;
    }
    printf("STOP!");
    return 0;
}