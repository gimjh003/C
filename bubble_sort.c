#include <stdio.h>
#define MAX 11
int main(){
    int data[MAX] = {11,10,9,8,7,6,5,4,3,2,1};
    int j, k, temp;
    for(k=0;k<MAX-1;k++){
        for(j=1;j<MAX-k;j++){
            if(data[j-1] > data[j]){
                temp = data[j-1];
                data[j-1] = data[j];
                data[j] = temp;
            }
        }
    }
    for(k=0; k<MAX; k++)
        printf("%d ",data[k]);
    return 0;
}