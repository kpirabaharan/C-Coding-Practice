#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *msg()
{
    printf("\nFrom Thread");
    pthread_cancel(pthread_self());
    sleep(2);
    return NULL;
}

int main()
{
    pthread_t th1;

    pthread_create(&th1, NULL, msg, NULL);

    printf("\nFrom Main");

    pthread_join(th1, NULL);

    pthread_exit(NULL);

    return 0;
}