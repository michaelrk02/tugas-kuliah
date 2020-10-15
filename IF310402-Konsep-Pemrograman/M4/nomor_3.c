#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    for (i = 0; i <= 9; i++) {
        sum = sum + i;
    }
    printf("[3A] Sum of integers within the range [0, 9] is %d\n", sum);

    printf("[3B] Numbers:\n");
    for (i = 1; i <= 5; i++) {
        int j;
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
