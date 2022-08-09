# include <stdio.h>
# include <string.h>
# include <ctype.h>

int main ()
{
    char text [] = {"Some Text!"};

    for(int i=0; (text[i] = (char)toupper(text[i])) != '\0'; ++i); // How to toupper

    printf("Text %s\n", text);

    return 0;
}
