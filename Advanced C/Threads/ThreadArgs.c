#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void *printM(void *msg)
{
    sleep(5);
    printf("\n%s", (char *)msg);
    return NULL;
}

int main()
{
    pthread_t th1, th2;
    char *message1 = "Thread 1";
    char *message2 = "Thread 2";
    int ret1, ret2;
    ret1 = ret2 = 0;

    ret1 = pthread_create(&th1, NULL, printM, (void *)message1);
    ret2 = pthread_create(&th2, NULL, printM, (void *)message2);

    pthread_join(th1, NULL);
    pthread_join(th2, NULL);

    printf("\nThread 1 returns: %d", ret1);
    printf("\nThread 2 returns: %d", ret2);

    pthread_exit(NULL);

    return 0;
}