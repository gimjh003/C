#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    (num<0)?printf("%d\n", -num):printf("%d\n", num); // or
    printf("%d\n", (num<0)?-num:num);
    return 0;
}