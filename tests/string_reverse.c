#include <stdio.h>
#include <string.h>
int main(){
    char str[50] = {0}, rev[50] = {0};
    int i, len;
    printf("type string : ");
    scanf("%s", str);
    len = strlen(str);
    for(i=0; i<len; i++)
        rev[i] = str[len-1-i];
    printf("reversed : %s", rev);
    return 0;
}