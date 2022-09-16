#include <stdio.h>

int main()
{

    FILE *fp = NULL;

    fp = fopen("file3.txt", "w+");

    if (fp != NULL)
        fprintf(fp, "%s\n | %s %s %s %d", "Hello", "my", "number", "is", 123);

    fclose(fp);

    return 0;
}