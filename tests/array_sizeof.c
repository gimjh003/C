#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5}; // 인덱스 없이 초기화를 하면 자동으로 자료의 개수만큼 배열이 만들어진다. ( = int arr[5] = {1,2,3,4,5})
    printf("size of arr : %d Byte\n", sizeof(arr)); // 바이트 크기
    printf("length of arr : %d\n", sizeof(arr)/sizeof(int)); // arr는 int형 자료들을 담기 때문에 int 단위로 나누면 인덱스를 정하지 않았더라도 길이를 알 수 있다.
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) // 그런 방식으로 알아낸 길이를 이런 식으로 활용 가능하다.
        printf("arr[%d] : %d\n", i, arr[i]);
    return 0;
}