#include <stdio.h>
int main(){
    int n, i=0, sum=0;
    scanf("%d", &n);
    while(sum < n)
        sum += ++i;
    printf("%d", i);
    return 0;
}
