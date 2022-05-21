#include <stdio.h>
int main(){
    const int* p = NULL, a=1, b=2;
    p = &a;
    *p = b; // 상수 포인터는 주소를 바꿀 수 있지만 값을 바꿀 수는 없다.
    printf("%X\n%p", p, p);
    return 0;
}