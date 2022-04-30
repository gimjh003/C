#include <stdio.h>
int main(){
    char str[] = "ABCD", *p; // 포인터의 자료형이란 '주소'와 더불어 '크기 정보'를 추가로 담기 위해 필요한 것이다. (가리킬 주소에 있는 값의 크기와 같음)
    printf("str addr = %p, str[0] addr = %p\n", str, &str[0]);
    p = str;
    printf("p = %c, str = %c\n", *p, *str);
    printf("p = %c, str = %c\n", p[1], str[1]); // 포인터도 배열과 유사하게 인덱스를 사용할 수 있다. (배열이 곧 포인터이니 당연한 걸까?)
    printf("How about this? : %d\n", p==str);
    return 0;
}