#include <stdio.h>
int main(){
    char s[] = "Basic-C";
    char* p;
    int i;
    p = s;
    for(i=sizeof(s)-2; i>=0; i--)
        printf("%c", *(p+i));
    printf("\n");
    return 0;
}