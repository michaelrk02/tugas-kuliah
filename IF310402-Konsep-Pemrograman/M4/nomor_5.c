#include <stdio.h>

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n >= 0) {
        int x;
        int factorial = 1;
        for (x = n; x > 0; x--) {
            factorial = factorial * x;
        }
        printf("%d! = %d\n", n, factorial);
    } else {
        printf("Input must be greater than or equal to 0!\n");
    }

    return 0;
}
