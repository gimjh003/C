#include <stdio.h>
int main(){
    int s[] = {1,0,3,2,5,4,7,6,9,8};
    int tmp, i, k;
    int* p;
    p=s;
    printf("before sort ==> ");
    for(i=0; i<sizeof(s)/sizeof(int); i++)
        printf("%d ", *(p+i));
    printf("\n");
    for(i=0; i<sizeof(s)/sizeof(int)-1; i++)
        for(k=i+1; k<sizeof(s)/sizeof(int); k++)
            if(*(p+i)>*(p+k)){
                tmp = *(p+i);
                *(p+i) = *(p+k);
                *(p+k) = tmp;
            }
    printf("after sort ==> ");
    for(i=0; i<sizeof(s)/sizeof(int); i++)
        printf("%d ", *(p+i));
    return 0;
}