#include <stdio.h>
int main(){
    int aa[3][4];
    int i, k;
    int val=1;
    for(i=0;i<3;i++){
        for(k=0;k<4;k++){
            aa[i][k] = val;
            val++;
        }
    }
    printf("row and column of array : aa[3][4]\n");
    for(i=0;i<3;i++){
        for(k=0;k<4;k++){
            printf("%3d", aa[i][k]);
        }
        printf("\n");
    }
    return 0;
}