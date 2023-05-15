#pragma warning(disable:4996)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void hanoi(int n, int from, int middle, int end) {
    if (n == 1) {
        printf("%d %d\n", from, middle);
        return;
    }

    hanoi(n - 1, from, end, middle);
    printf("%d %d\n", from, middle);
    hanoi(n - 1, end, middle, from);
}

int main() {
    int n;
    scanf("%d", &n);

    // 이동 횟수 출력
    printf("%d\n", (1 << n) - 1);

    // 이동 과정 출력
    hanoi(n, 1, 3, 2);

    return 0;
}

