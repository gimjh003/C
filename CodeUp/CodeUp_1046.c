#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    long long int sum = a+b+c;
    printf("%lld\n", sum);
    printf("%.1f", (float)sum/3);
    return 0;
}
