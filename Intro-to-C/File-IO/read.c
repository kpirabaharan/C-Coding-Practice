#include <stdio.h>

// Using fgetc "singular"
int main()
{
    // We are using int to get char because we want to stop at EOF which is an int
    FILE *fp = fopen("myfile.txt", "r+]");
    int c;

    // Always need to check if file open was a success
    if (fp == NULL)
    {
        perror("Error in opening file");
        return (-1);
    }

    // EOF means end of file
    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);

    // Close file when done and set pointer to NULL, good practice
    fclose(fp);
    fp = NULL;

    return 0;
}