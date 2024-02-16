  #include <stdio.h>

int main() {
    int n;   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of elements should be greater than 0.\n");
        return 1;   
    }

    int numbers[n];

     
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

     
    int greatest = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > greatest) {
            greatest = numbers[i];
        }
    }

     
    printf("The greatest number is: %d\n", greatest);

    return 0;   
}
