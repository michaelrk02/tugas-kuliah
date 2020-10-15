#include <stdio.h>

int main() {
    int i;
    int num_honor = 0, num_satis = 0, num_unsatis = 0;

    printf("Enter the grades of 10 students\n");
    for (i = 0; i < 10; i++) {
        int grade;

        scanf("%d", &grade);

        printf("%d is ", grade);
        if ((85 <= grade) && (grade <= 100)) {
            printf("honor");
            num_honor++;
        } else if ((60 <= grade) && (grade < 85)) {
            printf("satisfactory");
            num_satis++;
        } else if ((0 <= grade) && (grade < 60)) {
            printf("unsatisfactory");
            num_unsatis++;
        } else {
            printf("ignored (invalid input)");
        }
        printf("\n");
    }

    printf("Total number of honor students: %d\n", num_honor);
    printf("Total number of satisfactory students: %d\n", num_satis);
    printf("Total number of unsatisfactory students: %d\n", num_unsatis);

    return 0;
}

