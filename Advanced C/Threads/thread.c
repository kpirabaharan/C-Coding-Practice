#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *printM(void *msg)
{
    printf("\n%s", (char *)msg);
    sleep(5);
    return NULL;
}

void *printM2(void *msg)
{
    printf("\n%s", (char *)msg);
    sleep(10);
    return NULL;
}

int main()
{

    pthread_t th1, th2;
    int thex1, thex2;
    thex1 = thex2 = 0;

    while (1)
    {
        if (thex1 == 0)
        {
            if (pthread_create(&th1, NULL, printM, (void *)"Message 1") != 0)
                return EXIT_FAILURE;
        }

        if (thex2 == 0)
        {
            if (pthread_create(&th2, NULL, printM, (void *)"Message 2") != 0)
                return EXIT_FAILURE;
        }

        thex1 = pthread_tryjoin_np(th1, NULL);
        thex2 = pthread_tryjoin_np(th2, NULL);
    }

    return 0;
}