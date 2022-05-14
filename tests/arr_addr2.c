#include <stdio.h>
int main(){
    char str[5] = "ABCD", *p;
    p = str; // str이 포인터임으로 & 없이 대입
    printf("p = %c, str = %c\n", *p, *str); // str을 포인터처럼 사용
    printf("p = %c, str = %c\n", p[1], str[1]); // p를 배열처럼 사용
    p = &str[1]; // str[1]은 일반 변수로 & 사용
    printf("p = %s, p[1] = %c\n", p, p[1]); // p의 주소가 str[1]의 주소
    return 0;
}