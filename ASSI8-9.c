#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200], word[50];
    char *ptr;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Enter word to search: ");
    scanf("%49s", word);

    ptr = strstr(sentence, word);

    if(ptr != NULL)
    {
        printf("Word found at position %ld", ptr - sentence + 1);
    }
    else
    {
        printf("Word not found.");
    }

    return 0;
}
