#include <stdio.h>

int main() {
    int totalStudents, boys, girls;

    // Get input for the total number of students
    printf("Enter the total number of students: ");
    scanf("%d", &totalStudents);

    // Get input for the number of boys
    printf("Enter the number of boys: ");
    scanf("%d", &boys);

    // Calculate the number of girls
    girls = totalStudents - boys;

    // Display the results
    printf("Number of students: %d\n", totalStudents);
    printf("Number of boys: %d\n", boys);
    printf("Number of girls: %d\n", girls);

    // Calculate and display the ratio of girls to boys
    if (boys != 0) {
        float ratio = (float)girls / boys;
        printf("Ratio of girls to boys: %.2f : 1\n", ratio);
    } else {
        printf("No boys, so the ratio is undefined.\n");
    }

    return 0;
}
