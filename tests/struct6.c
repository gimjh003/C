#include <stdio.h>

int main(){
    struct student{
        char name[10];
        int kor, eng;
        float avg;
    };
    struct student a;
    struct student *p;

    p = &a;
    printf("input name : ");
    scanf("%s", p->name);
    printf("kor score : ");
    scanf("%d", &p->kor);
    printf("eng score : ");
    scanf("%d", &p->eng);
    p->avg = (p->kor+p->eng)/2.0;
    printf("\nSTRUCT POINTER\n");
    printf("student name : %s\n", p->name);
    printf("kor score : %d\n", p->kor);
    printf("eng score : %d\n", p->eng);
    printf("average score : %5.1f\n", p->avg);
    return 0;
}