#include <stdio.h>
/* 초기화되지 않은 배열의 특정 요소 값 출력하기 */
void main() {
    short student[20];

    student[1] = 10;
    printf("%d %d\n", student[1], student[2]);
}