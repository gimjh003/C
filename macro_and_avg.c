#include <stdio.h>
#define MAX 7
int main(){
    int arr[MAX], k, sum=0;
    double avg;
    printf("7 integer require : ");
    for(k=0; k<MAX; k++){
        scanf("%d", &arr[k]);
        sum += arr[k];
    }
    avg = sum/(float)MAX;
    printf("avg val is : %.1lf", avg);
    return 0;
}