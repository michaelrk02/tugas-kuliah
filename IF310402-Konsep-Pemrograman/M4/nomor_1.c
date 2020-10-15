#include <stdio.h>

int main() {
    int i;

    for (i = 0; i < 4; i++) {
        int j;
        int power = 1;

        for (j = 0; j < 7; j++) {
            power = power * i;
        }
        printf("%d^7 = %d\n", i, power);
    }

    return 0;
}
