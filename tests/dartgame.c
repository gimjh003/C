#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int k, l;
    for(l=0; l<61; l++) printf(" ");
        printf("|\n\n");
    for(k=0; k<120; k++){
        printf(" ");
        if(kbhit()) break;
        _sleep(40);
    }
    if(k>58&&k<62) printf("* Hit\n");
    else printf("* Miss\n");
    return 0;
}