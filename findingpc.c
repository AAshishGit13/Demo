#include <stdio.h>

int main() {
    float totalMarks, obtainedMarks, percentage;
    printf("Enter total marks: ");
    scanf("%f", &totalMarks);
    printf("Enter obtained marks: ");
    scanf("%f", &obtainedMarks);
 
    percentage = (obtainedMarks / totalMarks) * 100;
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
