#include <stdio.h>
int main(){
    int num[3], temp, i;
    for(i=0;i<3;i++){
        scanf("%d", &num[i]);
        if(i>0){
            if(num[i]<num[i-1]){
                temp = num[i];
                num[i] = num[i-1];
                num[i-1] = temp;
            }
        }
    }
    printf("%d %d %d", num[0], num[1], num[2]);
    return 0;
} // not works