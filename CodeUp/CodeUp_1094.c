#include <stdio.h>
int main(){
    int n, call;
    scanf("%d", &n);
    int numbers[n];
    for(int i=0; i<n; i++){
        scanf("%d", &call);
        numbers[i] = call;
    }
    for(int i=n-1; i>=0; i--)
        printf("%d ", numbers[i]);
    return 0;
}
