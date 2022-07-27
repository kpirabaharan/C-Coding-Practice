# include <stdio.h>

int main()
{
    int grades[10];
    int integers[5] = {0, 1, 2, 3, 4}; 
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 grades: \n");


    // Read the 10 numbers to average
    int i;
    for(i = 0; i < count; i++)
    {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float) sum/count;

    printf("\nAverage of the ten grades entered is: %.2f\n", average);
}