#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[] = "C Programming", *p=str;
    while(*p){
        printf("%c", *p++);
        _sleep(500);
    }
    return 0;
}