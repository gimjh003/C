// STRUCT VER

#include <stdio.h>
#include <string.h>

int main(){
    struct student{
      char name[11];
      int kor;
      int eng;
      float avg;  
    };
    
    struct student s[3];
    struct student* p;
    int i;

    strcpy(s[0].name, "Kim");
    s[0].kor = 90;
    s[0].eng = 80;
    s[0].avg = (s[0].kor+s[0].eng)/2.0f;

    strcpy(s[1].name, "Lee");
    s[1].kor = 70;
    s[1].eng = 60;
    s[1].avg = (s[1].kor+s[1].eng)/2.0;
    
    strcpy(s[2].name, "Park");
    s[2].kor = 50;
    s[2].eng = 40;
    s[2].avg = (s[2].kor+s[2].eng)/2.0;

    p = s;

    printf("addr of s : %p\n", p++);
    printf("addr of s+1 : %p\n", p);

    printf("STRUCT\n");
    for(i=0; i<3; i++){
        printf("student name : %s\n", s[i].name);
        printf("kor score : %d\n", s[i].kor);
        printf("eng score : %d\n", s[i].eng);
        printf("average score : %5.1f\n", s[i].avg);
        printf("\n");
    }
    return 0;
}