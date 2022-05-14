#include <stdio.h>
int main(){
    int *p, i = 3, j = 0;
    char *cp, a[5] = "ABCD";
    p = &i;
    cp = a;
    cp += 3;
    printf("%c and +1 is %c", *cp, *(cp+1));
    return 0;
}