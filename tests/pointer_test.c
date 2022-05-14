#include <stdio.h>
int main(){
    int aa[3] = {10, 20, 30};
    printf("&aa[0] is %d, aa+0 is %d\n", &aa[0], aa+0);
    printf("&aa[1] is %d, aa+1 is %d\n", &aa[1], aa+1);
    printf("&aa[2] is %d, aa+2 is %d\n", &aa[2], aa+2);
    return 0;
}