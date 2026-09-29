#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    char *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter character to search: ");
    scanf("%c", &ch);

    ptr = strchr(str, ch);

    if(ptr != NULL)
    {
        printf("Character found at position %ld", ptr - str + 1);
    }
    else
    {
        printf("Character not found.");
    }

    return 0;
}
