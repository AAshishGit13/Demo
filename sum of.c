#include <stdio.h>

int main() {
    int start, end, i;
    int sum = 0;

    // Get user input for the range
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Loop through the range and add odd numbers to the sum
    for (i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    // Display the result
    printf("The sum of odd numbers from %d to %d is: %d\n", start, end, sum);

    return 0;
}
