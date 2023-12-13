#include <stdio.h>

int main() {
    int A, B, C;

    printf("A:");
    scanf("%d", &A);

    printf("B:");
    scanf("%d", &B);

    printf("C:");
    scanf("%d", &C);

    if (A >= B && A > C) {
        printf("The largest number: %d\n", A);
    } else if (B >= A && B >= C) {
        printf("The largest number: %d\n", B);
    } else {
        printf("The largest number: %d\n", C);
    }

    return 0;
}

