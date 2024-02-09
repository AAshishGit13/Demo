 #include <stdio.h>
#include <math.h>

void tower(int, char, char, char);

void main()
{
    int n;
    char A, B, C;
    printf("\nTower of Hanoi\n");
    printf("\nEnter the number of disks:");
    scanf("%d", &n);
    printf("The number of moves = %.0f\n", (pow(2, n) - 1));
    printf("\nTower of Hanoi simulation for %d disks\n", n);
    tower(n, 'A', 'C', 'B');
    // getch();  
}

void tower(int n, char source, char dest, char aux)
{
    if (n == 1)
    {
        printf("\nMove disk %d from %c to %c", n, source, dest);
        return;
    }
    tower(n - 1, source, aux, dest);
    printf("\nMove disk %d from %c to %c", n, source, dest);
    tower(n - 1, aux, dest, source);
}
