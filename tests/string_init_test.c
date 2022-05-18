#include <stdio.h>
int main(){
    char str[11] = {0}, str2[11] = {'\0'};
    if(str == str2){
        printf("True"); // False
    }
    if(str[0] == str2[0]){
        printf("True2"); // True
    }
    return 0;
}