// STRUCT VER
#include <stdio.h>

int main(){
    struct student{
        char name[10];
        int kor;
        int eng;
        float avg;
    };

    struct student a;

    printf("name : ");
    scanf("%s", a.name, 9);
    printf("kor score : ");
    scanf("%d", &a.kor);
    printf("eng score : ");
    scanf("%d", &a.eng);
    a.avg = (a.kor + a.eng)/2.0f;
    printf("STRUCT\n");
    printf("student name : %s\n", a.name);
    printf("kor score : %d\n", a.kor);
    printf("eng score : %d\n", a.eng);
    printf("average score : %5.1f\n", a.avg);
    return 0;
}