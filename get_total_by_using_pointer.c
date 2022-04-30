#include <stdio.h>
double print_score(int *score, int size){
    int sum = 0, k;
    for(k=0; k<size; k++){
        printf("%d = %d point\n", k, score[k]);
        sum += score[k];
    }
    return sum;
}
int main(){
    int score[5] = {75, 84, 13, 96, 46}, sum;
    sum = print_score(score, 5);
    printf("total : %d", sum);
    return 0;
}