 #include <stdio.h>

long int factorial(int);

int main() {
    int n;

    printf("\nEnter the value: ");
    scanf("%d", &n);

    if (n >= 0) {
        long int result = factorial(n);
        printf("\nFactorial of %d is: %ld", n, result);
    } else {
        printf("\nInput value must be greater than or equal to zero");
    }

    return 0;
}

long int factorial(int n) {
    if ((n == 1) || (n == 0))
        return 1;
    else
        return n * factorial(n - 1);
}
