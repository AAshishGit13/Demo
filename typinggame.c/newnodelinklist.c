 #include<stdio.h>
#include<stdlib.h>

void main()
{
    struct n
    {
        int info;
        struct n* link;
    };
    typedef struct n node;
    node* START = NULL;
    node* temp, * ptr;
    char ch = 'Y';

    while (ch == 'Y' || ch == 'y')
    {
        ptr = (node*)malloc(sizeof(node));
        if (ptr == NULL)
        {
            printf("\n Memory allocation error ");
            exit(1);
        }

        if (START == NULL)
        {
            START = ptr;
        }
        else
        {
            temp = START;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = ptr;
        }

        printf("Enter the info field value of the new node: ");
        scanf("%d", &ptr->info);
        ptr->link = NULL;

        printf("Do you wish to continue? (Y/N): ");
        scanf(" %c", &ch);  // Note the space before %c to consume the newline character

    }

    temp = START;
    printf("\nLinked list nodes are:\n");
    while (temp)
    {
        printf("%d\t", temp->info);
        temp = temp->link;
    }
}
