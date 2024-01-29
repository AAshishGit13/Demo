 #include<stdio.h>

int main() {
    int n, num[10], small, large, i;

    // Input the number of elements
    printf("Number of elements: ");
    scanf("%d", &n);

    // Input the integers
    printf("Enter the %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    // Initialize small and large with the first element of the array
    small = num[0];
    large = num[0];

    // Find the smallest and largest elements in the array
    for (i = 1; i < n; i++) {
        if (small > num[i]) {
            small = num[i];
        }
        if (large < num[i]) {
            large = num[i];
        }
    }

    // Print the result
    printf("The smallest element is %d\nThe largest element is %d", small, large);

    return 0;
}
