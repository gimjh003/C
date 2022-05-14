#include <stdio.h>
int main(){
    int dan=2, num, k;
    for(k=0;k<72;k++){
        num = k%9+1;
        printf("%dx%d=%d ", dan, num, dan*num);
        if(num==9){
            dan++;
            printf("\n");
        }
    }
    return 0;
}