#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void name(char ch);
char input();

int main(){
    char ch = input();
    name(ch);
    return 0;
}

char input(){
    char ch;
    printf("A~Z중 하나 입력 : ");
    scanf("%c", &ch);
    return ch;
}

void name(char ch){
    int i;
    for(i=0; i<5; i++)
        printf("%c\n", ch);
}