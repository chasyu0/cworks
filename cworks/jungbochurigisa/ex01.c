#include <stdio.h>

int main() {
    int i,j;
    int temp;
    int a[5] = {75, 95,85, 100, 50};
    
    // 버블 정렬 구현 (오름차순)
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // 정렬된 배열 출력
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}