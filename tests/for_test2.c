#include <stdio.h>
int main(){
    int i, j;
    for(i=1, j=3; i<6; i++, j++)
        printf("%d %d\n", i, j);
    printf("%d %d", i, j);
    return 0;
}