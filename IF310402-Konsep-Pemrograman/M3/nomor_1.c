#include <stdio.h> /* for printf, scanf */

int main() {
    int a; /* input nomor 1A */
    int b; /* input nomor 1B */
    int c1, c2; /* input nomor 1C */
    float d1, d2; /* input nomor 1D */

    /* Nomor 1A */
    printf("[1A] ");
    printf("Please enter an integer: ");
    scanf("%d", &a);
    if (a % 2 == 0) { /* cek jika a dibagi 2 bersisa 0 */
        printf("%d is even\n", a);
    } else { /* jika tidak bersisa 0 */
        printf("%d is odd\n", a);
    }

    /* Nomor 1B */
    printf("[1B] ");
    printf("Please enter an integer: ");
    scanf("%d", &b);
    if (b < 0) { /* cek jika b kurang dari 0 */
        printf("%d is negative\n", b);
    } else { /* jika b lebih dari atau sama dengan 0 */
        printf("%d is positive\n", b);
    }

    /* Nomor 1C */
    printf("[1C] ");
    printf("Please enter two integers: ");
    scanf("%d%d", &c1, &c2);
    if (c2 < c1) { /* jika c2 lebih kecil dari c1 */
        printf("Smaller one is %d\n", c2);
    } else { /* jika c2 tidak lebih kecil dari c1 */
        /*
            bisa dikatakan c2 lebih besar dari atau samadengan c1
            maka c1 lah yang lebih kecil
        */
        printf("Smaller one is %d\n", c1);
    }

    /* Nomor 1D */
    printf("[1D] ");
    printf("Please enter two real numbers: ");
    scanf("%f%f", &d1, &d2);
    printf("Multiplication result is %.3f\n", (d1 * d2)); /* 3 angka dibelakang koma maka %.3f */

    return 0;
}

