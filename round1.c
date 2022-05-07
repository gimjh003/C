#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[5] = "love";
    int k, m;
    for(k=0; k<30; k++){
        system("cls");
        for(m=0; m<4; m++)
            putchar(str[(m+k)%4]);
        _sleep(200);
    }
    return 0;
}