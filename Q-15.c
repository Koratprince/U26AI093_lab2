#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (m1 < 33 || m2 < 33 || m3 < 33 || m4 < 33 || m5 < 33) {
        printf("Division: Fail (Failed in one or more subjects)\n");
    }
    else if (percentage >= 60.0) {
        printf("Division: First Division\n");
    }
    else if (percentage >= 48.0) {
        printf("Division: Second Division\n");
    }
    else if (percentage >= 33.0) {
        printf("Division: Third Division\n");
    }
    else {
        printf("Division: Fail\n");
    }

    return 0;
}
