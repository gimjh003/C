#include <stdio.h>
int main(){
    int a[] = {1,2,3,4};
    long *p; // same, 4 Bytes
    p = a;
    for(int i=0; i<4; i++)
        printf("%d", *(p+i));
    return 0;
}