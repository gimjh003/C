#include <stdio.h>
int main(){
    int num[5];
    scanf("%1d%1d%1d%1d%1d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]", num[0]*10000, num[1]*1000, num[2]*100, num[3]*10, num[4]);
    return 0;
}
