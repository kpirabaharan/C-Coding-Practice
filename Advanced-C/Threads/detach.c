#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *msg()
{
    printf("\nCode: %d", pthread_detach(pthread_self()));
    sleep(1);
    printf("\nThread Fn");
    return NULL;
}

int main()
{
    int ret = 0;
    pthread_t th1;

    ret = pthread_create(&th1, NULL, msg, NULL);

    if (ret != 0)
    {
        perror("Thread Creation Error");
        exit(1);
    }

    // pthread_detach(th1);

    fprintf(stdout, "\nAfter thread is created!");

    // pthread_join(th1, NULL);

    pthread_exit(NULL);

    return 0;
}