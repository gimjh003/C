#include <stdio.h>
int main(){
    char* p = "ABC";
    printf("%s\n", p); // "ABC"
    char* p2[] = {"abc", "ABC"}; // 문자열들을 담기 위해서는 2차원 배열이 필요하지만, 여기서는 주소가 2 개 있는 격이기 때문에 일차원 포인터 배열로도 가능한 것일까?
    printf("%c\n", p[1]); // 포인터를 통한 인덱스 연산 가능, 'B'
    printf("%c\n", *(p+1)); // 'B'
    printf("%c\n", *p2[0]); // 'a', p[i]는 해당 인덱스의 시작주소를 의미하는 듯하다.
    char Arr[][4] = {"abc", "def"};
    char *p3 = Arr;
    printf("%c", *(p3+4));
    return 0;
}