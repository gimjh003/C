#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int totFun(int kor, int eng, int math);
float avgFun(int kor, int eng, int math);
void degFun(int kor, int eng, int math);

int main() {
    int kor, eng, math;
    printf("korean : ");
    scanf("%d", &kor);
    printf("english : ");
    scanf("%d", &eng);
    printf("math : ");
    scanf("%d", &math);
    degFun(kor, eng, math);
    return 0;
}

int totFun(int kor, int eng, int math) {
    return kor + eng + math;
}

float avgFun(int kor, int eng, int math) {
    int tot = totFun(kor, eng, math);
    float avg = (int)(tot / 3.0 * 10) / 10.0;
    return avg;
}

void degFun(int kor, int eng, int math) {
    int tot = totFun(kor, eng, math);
    float avg = avgFun(kor, eng, math);
    char deg;
    switch ((int)avg / 10) {
    case 10:
    case 9:
        deg = 'A';
        break;
    case 8:
        deg = 'B';
        break;
    case 7:
        deg = 'C';
        break;
    case 6:
        deg = 'D';
        break;
    default:
        deg = 'F';
    }
    printf("name test result\n");
    printf("korean : %d pt\n", kor);
    printf("english : %d pt\n", eng);
    printf("math : %d pt\n", math);
    printf("-------------\n");
    printf("total : %d pt\n", tot);
    printf("average : %.1f pt\n", avg);
    printf("degree : %c\n", deg);
}