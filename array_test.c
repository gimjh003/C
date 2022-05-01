#include <stdio.h>
int main(){
    char ss[5] = "abcd";
    char tt[5];
    int i;
    for(i=0; i<4; i++){
        tt[i] = ss[3-i];
    }
    tt[4] = '\0';
    printf("reversed value = %s\n", tt);
    ss = &i; // 주소 수정 불가능
    return 0;
}