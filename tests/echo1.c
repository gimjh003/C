#include <stdio.h>
#include <stdlib.h>

int main(){
    int ch;
    while(1){
        ch = getchar();
        if(ch!=EOF) // EOF = End Of File, Ctrl + Z
            putchar(ch);
        else break;
    }
    return 0;
}