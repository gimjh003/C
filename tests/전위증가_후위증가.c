#include <stdio.h>
int n1, n2;
int main(){
    printf("%d %d\t", n1++ +2, ++n2);
    printf("%d %d\t", --n1, n2++);
    printf("%d %d\t", n1--, ++n2);
    printf("%d %d\n", n1, n2);
    return 0;
}