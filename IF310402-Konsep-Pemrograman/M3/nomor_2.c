#include <stdio.h> /* for printf, scanf */

int main() {
    int from, to;
    int loop; /* untuk pengecekan di while */

    from = 0;
    to = 5;
    loop = from; /* mulai `loop` dari from (0) */

    printf("Number\tSquare\tCube\n");
    while (loop <= to) { /* selagi loop kurang dari atau samadengan `to` */
        printf("%d\t%d\t%d\n", loop, (loop * loop), (loop * loop * loop)); /* tampilkan nilai dari `loop` beserta kuadrat dan kubiknya */
        loop++; /* perbesar nilai `loop` (+1) */
    }

    return 0;
}
