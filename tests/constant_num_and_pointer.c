#include <stdio.h>
int main(){
    const int a = 5, b = 3;
    int *p_a;
    const int *p_b;
    p_a = &a;
    *p_a = 7;
    p_b = &b;
    printf("%d\n", a); // pointer can change const type
    printf("%d\n", *p_b);
    p_b = &a;
    printf("%d\n", *p_b);
    return 0;
}