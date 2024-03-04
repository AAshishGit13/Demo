 #include <stdio.h>

// Function declaration
int fact(int);

void main()
{
    int n, r, ncr;

    // Input values for n and r
    printf("Enter n and r values\n");
    scanf("%d %d", &n, &r);

    // Calculate binomial coefficient
    ncr = fact(n) / (fact(n - r) * fact(r));

    // Output the result
    printf("\nBinomial coefficient: %d", ncr);
}

// Function to calculate factorial
int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
