/*
    Range       Huruf
    -----       -----
    [85,100]    A
    [80, 85)    A-
    [75, 80)    B+
    [70, 75)    B
    [65, 70)    C+
    [60, 65)    C
    [55, 60)    D
    [0, 55)     E
*/

#include <stdio.h>

int main() {
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if ((0 <= grade) && (grade <= 100)) {
        printf("Your grade letter is ");
        if ((85 <= grade) && (grade <= 100)) {
            printf("A");
        } else if ((80 <= grade) && (grade < 85)) {
            printf("A-");
        } else if ((75 <= grade) && (grade < 80)) {
            printf("B+");
        } else if ((70 <= grade) && (grade < 75)) {
            printf("B");
        } else if ((65 <= grade) && (grade < 70)) {
            printf("C+");
        } else if ((60 <= grade) && (grade < 65)) {
            printf("C");
        } else if ((55 <= grade) && (grade < 60)) {
            printf("D");
        } else if ((0 <= grade) && (grade < 55)) {
            printf("E");
        }
        printf("\n");
    } else {
        printf("Your grade must be in [0, 100] range\n");
    }

    return 0;
}
