#include <stdio.h>
int main(){
    int arr[3];
    double avg;
    arr[0] = 97, arr[1] = 70, arr[2] = 65;
    avg = (arr[0]+arr[1]+arr[2])/3.0;
    printf("avg : %.1lf\n", avg);
    return 0;
}