#include <stdio.h>

int main(void)
{
    FILE *fin, *fout;
    int rollno, n, i;
    char name[30];

    fin = fopen("student.dat", "w");
    if (fin == NULL)
    {
        printf("\nFile cannot be opened\n");
        return 1;
    }

    printf("\nEnter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nstudent %d \n", i + 1);
        printf("\nEnter the roll number: ");
        scanf("%d", &rollno);
        printf("\nEnter the name: ");
        scanf("%29s", name);
        fprintf(fin, "%d %s\n", rollno, name);
    }

    fclose(fin);
    printf("\nStudent file created successfully");

    fin = fopen("student.dat", "r");
    if (fin == NULL)
    {
        printf("\nFile cannot be opened");
        return 1;
    }

    fout = fopen("output.dat", "w");
    if (fout == NULL)
    {
        printf("\nFile cannot be opened\n");
        return 1;
    }

    fprintf(fout, "\nRoll.No Name\n\n");
    while (fscanf(fin, "%d%s", &rollno, name) != EOF)
    {
        fprintf(fout, "%d\t%s\n", rollno, name);
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
