#include <stdio.h>
int print_score(const int score[], int size){ // 배열을 전달받는 경우, 크기를 모르기 때문에 크기가 정해지지 않은 배열로 전달해야 한다. 또한 배열을 전달할 때는 call by reference 방식이기 때문에 필요에 따라 const로 바꾸지 못하게 할 수 있다.
    int sum=0, k;
    for(k=0; k<size; k++){ 
        printf("%d = %d point\n", k, score[k]);
        sum += score[k];
    }
    return sum;
}
int main(){
    int score[5] = {75, 84, 13, 96, 46}, sum;
    sum = print_score(score, 5);
    printf("\nTOTAL : %d", sum);
    return 0;
}