#include <stdio.h>
int main(){
    int n, k, min=23, student[23];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &k);
        if(min>k)
            min = k;
    }
    printf("%d", min);
    return 0;
}
