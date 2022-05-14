#include <stdio.h>
int main(){
    int arr[5], sum=0;
    double avg;
    printf("5 integer require : ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum/5.0;
    printf("avg : %.1lf", avg);
    return 0;
}