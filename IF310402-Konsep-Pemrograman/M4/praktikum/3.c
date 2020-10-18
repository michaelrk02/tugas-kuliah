#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n, nmod4;
    scanf("%lld", &n);
    if (n >= 0) {
        if (n == 0) {
            printf("1");
        } else {
            nmod4 = n % 4;
            switch (nmod4) {
                case 0:
                    printf("6");
                    break;
                case 1:
                    printf("2");
                    break;
                case 2:
                    printf("4");
                    break;
                case 3:
                    printf("8");
                    break;
            }
        }
    } else {
        printf("5");
    }
    printf("\n");
    return 0;
}

