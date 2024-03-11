#include <stdio.h>
#include <math.h>

int findHighestPower(int base, int limit) {
    int power = 0;
    int result = 1;

    while (result <= limit) {
        power++;
        result = pow(base, power);
    }

    return power - 1;
}

int main() {
    int base, limit;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the limit: ");
    scanf("%d", &limit);

    int highestPower = findHighestPower(base, limit);

    printf("The highest power of %d within the limit %d is: %d\n", base, limit, highestPower);

    return 0;
}
