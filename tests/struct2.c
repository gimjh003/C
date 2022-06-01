/*
    NON-STRUCT-VER
*/
#include <stdio.h>

int main(){
    char name[10];
    int kor;
    int eng;
    float avg;
    printf("name : ");
    scanf("%s", name, 9);
    printf("kor score : ");
    scanf("%d", &kor);
    printf("eng score : ");
    scanf("%d", &eng);
    avg = (kor+eng)/2.0;
    printf("\n");
    printf("student name : %s\n", name);
    printf("kor score : %d\n", kor);
    printf("eng score : %d\n", eng);
    printf("average score : %5.1f\n", avg);
    return 0;
}