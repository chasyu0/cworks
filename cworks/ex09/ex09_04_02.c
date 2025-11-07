#include <stdio.h>

void main() {
    int step, i;
    /* 2단에서 9단까지 출력되도록 반복함 */
    for(step = 2; step <= 9; step++) {
        /* 변수가 1~ 9까지 1씩 증가하면서 총 9번 반복함 */
        for(i =1; i<=9; i++) {
            printf("%d * %d = %d\n", step, i, step * i );
        }
    }
}