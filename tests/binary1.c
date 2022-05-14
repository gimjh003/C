#include <stdio.h>
int main(){
    int data[20] = {2,7,8,11,12,17,19,20,23,26,28,31,33,37,40,44,47,52,63,64};
    int num, mid, min=0, max=19;
    printf("what you want : ");
    scanf("%d", &num);
    while(min<=max){ // 왜 작거나 "같아야" 하는가?
        mid = (max+min)/2; // 같다는 조건이 존재하지 않으면 양 끝의 인덱스는 탐색할 수 없다.
        if(data[mid]==num){ // max값이 계속 줄어들거나 min값이 계속 증가할 때, 서로 같아진 상황에서 탐색할 수 없다면. 결국 양 끝에 있는 값에 대해서는 영영 찾을 수 없을 것이다. (양 끝에 있는 값을 num과 비교 못함)
            printf("number index is %d", mid); // 하지만 같다는 조건이 존재한다면 (max+min)/2의 결과(max와 min이 공통적으로 가진 값)가 mid에 들어가면서 양 끝에 해당하는 인덱스까지 num과 비교가 가능하다.
            break;
        }
        else if(data[mid]<num)
            min = mid+1;
        else max = mid-1;
    }
    return 0;
}