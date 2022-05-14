#include <stdio.h>
int main(){
    char* p, str[255]; // same as char *p, str[255] and char str[255], *p
    p = str;
    printf("small letter : ");
    scanf("%s", str);
    while(*p!=0){ // same as *p!='\0'
        printf("%c", *p-32);
        p++;
    }
    return 0;    
}