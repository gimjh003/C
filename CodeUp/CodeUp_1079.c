#include <stdio.h>
int main(){
    char c;
    do{
        scanf("%c", &c);
        printf("%c", c);
    }while(c!='q');
    return 0;
}
