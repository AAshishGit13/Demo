 #include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *p, *tmp, *tmp1;

void insert_end(int);
void insert_beg(int);
void l_delete(int);
void delete_beg();
void delete_end();
void display();

int main()
{
    int val, n;
    p = NULL;
    do
    {
        printf("\n************************* MENU ************************");
        printf("\n1.INSERT AT END");
        printf("\n2.INSERT AT BEG");
        printf("\n3.DELETE A PARTICULAR ELE");
        printf("\n4.DELETE FROM BEG");
        printf("\n5.DELETE FROM END");
        printf("\n6.DISPLAY");
        printf("\n7.EXIT");
        printf("\nenter your choice : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("\nenter the value ");
            scanf("%d", &val);
            insert_end(val);
            break;
        case 2:
            printf("\nenter the value");
            scanf("%d", &val);
            insert_beg(val);
            break;
        case 3:
            printf("\nenter the value");
            scanf("%d", &val);
            l_delete(val);
            break;
        case 4:
            delete_beg();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            display();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\n Wrong Choice!");
            break;
        }
        printf("\n do you want to continue... ");
    } while ('y' == getchar()); // You might want to use a different method for getting character input

    return 0;
}

void insert_end(int ele)
{
    tmp = p;
    tmp1 = (struct node *)malloc(sizeof(struct node));
    tmp1->data = ele;
    tmp1->next = NULL;
    if (p == NULL)
        p = tmp1;
    else
    {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = tmp1;
    }
}

void insert_beg(int ele)
{
    tmp = p;
    tmp1 = (struct node *)malloc(sizeof(struct node));
    tmp1->data = ele;
    tmp1->next = p;
    p = tmp1;
}

void l_delete(int ele)
{
    tmp = p;
    struct node *pre = tmp;
    while (tmp != NULL)
    {
        if (tmp->data == ele)
        {
            if (tmp == p)
            {
                p = tmp->next;
                free(tmp);
                return;
            }
            else
            {
                pre->next = tmp->next;
                free(tmp);
                return;
            }
        }
        else
        {
            pre = tmp;
            tmp = tmp->next;
        }
    }
    printf("\n no match found!! ");
}

void delete_beg()
{
    tmp = p;
    if (p == NULL)
        printf("\n no element to be deleted!! ");
    else
    {
        printf("\nelement deleted - %d", p->data);
        p = p->next;
    }
}

void delete_end()
{
    tmp = p;
    struct node *pre;
    if (p == NULL)
        printf("\n no element to be deleted!! ");
    else if (p->next == NULL)
    {
        printf("\nelement deleted - %d", p->data);
        p = NULL;
    }
    else
    {
        while (tmp->next != NULL)
        {
            pre = tmp;
            tmp = tmp->next;
        }
        pre->next = NULL;
        printf("\nelement deleted - %d", tmp->data);
        free(tmp);
    }
}

void display()
{
    tmp = p;
    while (tmp != NULL)
    {
        printf("\n %d", tmp->data);
        tmp = tmp->next;
    }
}
