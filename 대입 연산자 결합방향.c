#include <stdio.h>
int main(){
    int num1=8, num2=5, num3=7;
    printf("%d %d %d\n", num1, num2, num3);
    num1 = num2 = num3;
    printf("%d %d %d\n", num1, num2, num3);
    return 0;
}