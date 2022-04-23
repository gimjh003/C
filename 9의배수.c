// 9의 배수를 입력받을 때까지 입력을 계속 받는 프로그램
#include <stdio.h>

int main(){
    int i;
    do{
        printf("type number : ");
        scanf("%d", &i);
    } while(i%9);
    return 0;
}