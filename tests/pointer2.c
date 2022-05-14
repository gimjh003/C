#include <stdio.h>
int main(){
    int num=5, *p_num, copy;
    p_num = &num;
    *p_num = 7;
    printf("num = %d, *p_num = %d\n", num, *p_num);
    num = 9;
    copy = *p_num;
    printf("copy = %d, *p_num = %d\n", copy, *p_num);
    return 0;
}