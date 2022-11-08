#include <stdio.h>
#include <string.h>

int main(void)
{
    char *sub;
    char newword[64];
    char word[64] = "This is an example sentence.";

    printf("%s\n", word);

    sub = strstr(word, "example");
    printf("%s\n", sub);

    if (sub != NULL)
    {
        strncpy(newword, word, strlen(word) - strlen(sub) - 2);
        sub += strlen("example");
        strncat(newword, sub, strlen(sub) + 1);
    }

    printf("%s\n", newword);

    return 0;
}
