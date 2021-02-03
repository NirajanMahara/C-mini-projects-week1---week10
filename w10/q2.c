// Write a program that creates 5 threads to display the numbers from 1-1000
// The 5 threads should equally contribute to display the numbers.
//1 - 1000
//1-200 201-400 401-600 601-800 801-1000

#include <stdio.h>
#include <pthread.h>
#define NUM_THREADS 5

struct threadArgs
{
    int threadID;
    int start;
    int finish;
};

void *threadFunc (void *p) {

    struct threadArgs *pArgs = p;

    int nStart = pArgs -> start, nEnd = pArgs -> finish;
    int i;

    for ( i = nStart; i <= nEnd; i++)
    {
        printf("From Thread %d: %d\n", pArgs->threadID, i);
    }
    
}

void main() {
    int i;
    pthread_t thread[5];
    struct threadArgs tArgs[5];

    int chunkSize = 1000 / NUM_THREADS;
    //1 - 1000
    //1-200 201-400 401-600 601-800 801-1000
    for ( i = 0; i < NUM_THREADS; i++)
    {
        tArgs[i].threadID = i + 1;
        tArgs[i].start = (i * chunkSize) + 1;
        tArgs[i].finish = (i * chunkSize) + chunkSize;

        pthread_create(&thread[i], NULL, threadFunc, &tArgs[i]);
    }

    for ( i = 0; i < NUM_THREADS; i++)
    {
        pthread_join(thread[i], NULL);
    }
}
