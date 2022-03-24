#include <stdio.h>
int main(){
    char c, a='a';
    scanf("%c", &c);
    do{
        printf("%c\n", a);
    } while(a++<c);
    return 0;
}
