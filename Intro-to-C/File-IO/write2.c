#include <stdio.h>

int main()
{

    FILE *fp;

    fp = fopen("file2.txt", "w+");

    if (fp != NULL)
    {
        fputs("Hi my name is Keeshigan.\n", fp);
        fputs("I will be very successful in life.", fp);
    }

    fclose(fp);

    return 0;
}