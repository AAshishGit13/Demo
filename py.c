#include <stdio.h>

int main() {
    int n;
    double pi = 0.0;

    printf("Enter the number of terms to approximate pi: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pi += 1.0 / (2 * i + 1);
        } else {
            pi -= 1.0 / (2 * i + 1);
        }
    }

    pi *= 4;

    printf("Approximation of pi with %d terms: %lf\n", n, pi);

    return 0;
}
