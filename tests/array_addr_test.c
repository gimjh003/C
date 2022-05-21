#include <stdio.h>
int main(){
    char** p, * cp, str[5] = "HELP", str2[5] = "VOLA";
    const char c = 'A';
    p = str;
    *p = str2;
    cp = &c;
    *cp = 'B';
    printf("%s", str);
    printf("%c", c);
    return 0;
}