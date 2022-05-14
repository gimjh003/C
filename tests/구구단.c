#include <stdio.h>
int main(){
    int dan, num;
    printf("<result>\n");
    for(dan=2; dan<10; dan++){
        for(num=1; num<10; num++){
            printf("%d X %d = %d ", dan, num, dan*num);
        }
        printf("\n");
    }
    return 0;
}