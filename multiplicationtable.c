#include <stdio.h>

int main() {
    int number, limit;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Input the limit for multiples
    printf("Enter the limit for multiples: ");
    scanf("%d", &limit);

    printf("Multiples of %d up to %d:\n", number, limit);

    // Iterate and print multiples
    for (int i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
