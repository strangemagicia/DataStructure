#include <stdio.h>

void Total(int kor, int eng, int math, int* total) {
    *total = kor + eng + math;
}

void Average(int total, double* avg) {
    *avg = total / 3.0;
}

void Grade(double avg, char* grade) {
    switch ((int)avg / 10) {
    case 10: case 9:
        *grade = 'A';
        break;
    case 8:
        *grade = 'B';
        break;
    case 7:
        *grade = 'C';
        break;
    case 6:
        *grade = 'D';
        break;
    default:
        *grade = 'F';
        break;
    }
}

int main() {
    int kor, eng, math, total;
    double avg;
    char grade;

    printf("국어, 수학, 영어 성적 입력: ");
    scanf("%d %d %d", &kor, &math, &eng);

    Total(kor, eng, math, &total);
    Average(total, &avg);
    Grade(avg, &grade);

    printf("총합: %d\n", total);
    printf("평균: %.2lf\n", avg);
    printf("등급: %c\n", grade);
    return 0;
}
