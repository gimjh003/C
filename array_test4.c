#include <stdio.h>
int main(){
    char *p, s[] = "Hello, World!";
    p = s;
    while(*p)
        printf("%c", *p++);
    return 0;
}