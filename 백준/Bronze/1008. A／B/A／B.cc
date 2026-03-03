#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%.9lf\n", (double)A / B);  // 소수점 9자리 출력
    return 0;
}