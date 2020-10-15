#include <stdio.h>

int main() {
    int i;
    int num_honor = 0, num_satis = 0, num_unsatis = 0;

    printf("Enter student grades (-1 to stop)\n");
    while (1) {
        int grade;

        scanf("%d", &grade);

        if (grade != -1) {
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
        } else {
            printf("STOPPED\n");
            break;
        }
    }

    printf("Total number of honor students: %d\n", num_honor);
    printf("Total number of satisfactory students: %d\n", num_satis);
    printf("Total number of unsatisfactory students: %d\n", num_unsatis);

    return 0;
}

