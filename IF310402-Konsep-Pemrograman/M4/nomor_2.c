#include <math.h>
#include <stdio.h>

int main() {
    int x, y, op;

    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);

    printf("Choose an operation:\n");
    printf("1. ADDITION\n");
    printf("2. SUBTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISION\n");
    printf("5. SQUARE ROOT\n");
    printf("6. EXIT\n");
    printf("Enter selection (1-6): ");
    scanf("%d", &op);

    if (op != 6) {
        float resultA, resultB;

        if ((op == 4) && (y == 0)) {
            printf("Attempted to divide by zero\n");
            return 1;
        }

        switch (op) {
        case 1:
            resultA = x + y;
            break;
        case 2:
            resultA = x - y;
            break;
        case 3:
            resultA = x * y;
            break;
        case 4:
            resultA = (float)x / y;
            break;
        case 5:
            resultA = (float)sqrt((double)x);
            resultB = (float)sqrt((double)y);
            break;
        case 6:
            break;
        }
        printf("The result is ");
        if (op == 5) {
            /* square root */
            printf("%.2f and %.2f", resultA, resultB);
        } else {
            printf("%.2f", resultA);
        }
        printf("\n");
    } else {
        printf("Bye\n");
    }

    return 0;
}
