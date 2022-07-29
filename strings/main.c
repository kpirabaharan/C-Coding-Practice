# include <stdio.h>
# include <string.h>

int main ()
{
    char word [] = {"Hello World!\n"};
    char word2[50];
    //word2 = "THIS IS A TEST STRING!"; DOESN'T WORK

    strncpy(word2, "TEST STRING\n", sizeof(word2) - 1);

    printf("%s", word2);
}