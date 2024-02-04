 #include <stdio.h>
#include <stdlib.h>

struct date
{
    int dd;
    int mm;
    int yy;
};

struct product
{
    int number;
    int price;
    struct date dt;
};

int main(void)
{
    struct product p[3];
    int i;

    system("clear");   

    printf("\nEnter the details of 3 products\n");

    for (i = 0; i < 3; i++)
    {
        system("clear");   

        printf("\nPRODUCT %d DETAILS\n", i + 1);

        printf("\nEnter the product number -");
        scanf("%d", &p[i].number);

        printf("\nEnter the price of the product -");
        scanf("%d", &p[i].price);

        printf("\nEnter the date of purchase in DD MM YY format\n");

        printf("\nEnter the day of purchase\n");
        scanf("%d", &p[i].dt.dd);

        printf("\nEnter the month of purchase\n");
        scanf("%d", &p[i].dt.mm);

        printf("\nEnter the year of purchase\n");
        scanf("%d", &p[i].dt.yy);
    }

    system("clear");   

    printf("\nPRODUCT DETAILS\n");
    printf("\nNUMBER COST      DATE\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n%d\t%d\t%d-%d-%d\n", p[i].number, p[i].price, p[i].dt.dd, p[i].dt.mm, p[i].dt.yy);
    }

    getchar();   
    return 0;
}
