#include <stdio.h>

int main()
 {
    char ch;
    printf("ENTER ANY CHARACTER: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("THE ALPHABET IS IN UPPER CASE");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("THE ALPHABET IS IN LOWER CASE");
    } else if (ch >= '0' && ch <= '9') {
        printf("IT IS A NUMBER");
    } else {
        printf("IT IS A SPECIAL CHARACTER");
    }

    return 0;
}
