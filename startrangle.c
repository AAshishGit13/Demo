#include <stdio.h>

void printTriangle(int height) {
    for (int i = 1; i <= height; ++i) {
        // Print spaces
        for (int j = 0; j < height - i; ++j) {
            printf(" ");
        }
        
        // Print stars
        for (int k = 0; k < 2 * i - 1; ++k) {
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    int height;

    // Get the height of the triangle from the user
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    // Check if the height is greater than zero
    if (height > 0) {
        // Print the triangle
        printTriangle(height);
    } else {
        printf("Please enter a positive height.\n");
    }

    return 0;
}
