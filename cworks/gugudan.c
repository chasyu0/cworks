#include <stdio.h>

/* step에 전달된 숫자에 해당하는 단을 출력하는 함수*/
void ShowMultiplation(int step) 
{
    int i;
    /* i변수가 1~9까지 1씩 증가하면서 총 9번 반복함 */
    for(i=1; i<=9; i++) {
        /* step * i 형식으로 출력함 */
        printf("%d * %d = %d\n", step, i, step * i);
    }
}

// void main() 
// {
//     ShowMultiplation(5);
// }

/*전체 출력 구간 (주석)*/
void main() {
    int m; 
    for(m =2; m<=9; m++) {
        ShowMultiplation(m);
    }
}
