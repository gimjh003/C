// NOT STRUCT
#include <stdio.h>
#include <string.h>

int main(){
    char name[3][10];
    int kor[3];
    int eng[3];
    float avg[3];
    int i;
    strcpy(name[0], "Kim");
    kor[0] = 90;
    eng[0] = 80;
    avg[0] = (kor[0]+eng[0])/2.0;

    strcpy(name[1], "Lee");
    kor[1] = 70;
    eng[1] = 60;
    avg[1] = (kor[1]+eng[1])/2.0;
    
    strcpy(name[2], "Park");
    kor[2] = 50;
    eng[2] = 40;
    avg[2] = (kor[2]+eng[2])/2.0;
    
    for(int i=0; i<3; i++){
        printf("student name : %s\n", name[i]);
        printf("kor score : %d\n", kor[i]);
        printf("eng score : %d\n", eng[i]);
        printf("average score : %5.1f\n", avg[i]);
        printf("\n");
    }

    return 0;
}