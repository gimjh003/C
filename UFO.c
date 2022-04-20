#include <stdio.h>
#include <stdlib.h>
int main(){
    int k, sp;
    for(k=0; k<70; k++){
        system("cls");
        if(k%2)
            printf("\n");
        for(sp=0; sp<k; sp++)
            printf(" ");
        printf("<#=#>");
        system("timeout 1 > NULL");
    }
    return 0;
}