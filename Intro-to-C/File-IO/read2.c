#include <stdio.h>

// Using fgets "String"
int main()
{

    FILE *fp;
    char str[61];

    fp = fopen("myfile.txt", "r");

    if (fp == NULL)
    {
        perror("Error opening file");
        return (-1);
    }

    /*
    str − This is the pointer to an array of chars where the string read is stored.
    n − This is the maximum number of characters to be read (including the final null-character). Usually, the length of the array passed as str is used.
    stream − This is the pointer to a FILE object that identifies the stream where characters are read from.
    */

    // returns NULL if error
    if (fgets(str, 60, fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
