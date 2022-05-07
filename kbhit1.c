#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int k;
    printf("wait...\n");
    for(k=0; k<5; k++){
        if(kbhit())
            printf(">>>key hit");
        _sleep(2000);
    }
    return 0;
}