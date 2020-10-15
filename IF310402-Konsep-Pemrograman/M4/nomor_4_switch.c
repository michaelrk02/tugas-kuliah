/*
    Range       Huruf
    -----       -----
    [85, 100]   A
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
        grade = grade / 5;
        printf("Your grade letter is ");
        switch (grade) {
        case 20:
        case 19:
        case 18:
        case 17:
            printf("A");
            break;
        case 16:
            printf("A-");
            break;
        case 15:
            printf("B+");
            break;
        case 14:
            printf("B");
            break;
        case 13:
            printf("C+");
            break;
        case 12:
            printf("C");
            break;
        case 11:
            printf("D");
            break;
        default:
            printf("E");
            break;
        }
        printf("\n");
    } else {
        printf("Grade must be in [0, 100] range\n");
    }

    return 0;
}
