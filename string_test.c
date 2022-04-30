#include <stdio.h>
int main(){
    char str[] = "ABCDEFG";
    printf("%c and %c\n", str[0], str[6]);
    printf("%d and %d", str,  &str[6]);
    return 0;
}