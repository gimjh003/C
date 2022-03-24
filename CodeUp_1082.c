#include <stdio.h>
int main(){
    int n;
    scanf("%X", &n);
    for(int i=0x1; i<0x10; i++)
        printf("%X*%X=%X\n", n, i, n*i);
    return 0;
}
