#include <stdio.h>
int main(){
    int n, check, student[23] = {};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &check);
        student[check-1]++;
    }
    for(int i=0; i<23; i++)
        printf("%d ", student[i]);
    return 0;
}
