// Convert program no. 2 to accept an integer to specify the
// number of threads and then create that number of threads
// dynamically. All the threads will equally contribute to display
// the numbers from 1-1000.

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

struct threadArgs
{
    int threadId;
    int start;
    int end;
};


void *threadMain (void *p){

    struct threadArgs *t = p;
    int start = t->start;
    int end = t->end;
    int threadId = t->threadId;

    for (int i = start; i <= end; i++)
    {
        printf("Thread %d: %d\n", threadId, i);
    }
    
}

void main(int argc, char **argv) {
    // argc -> argument count
    // argv -> rgument value (which is in array)
    // ./q1 5 -> 2 argument count
    // argv[0] = ./q1
    // argv[1] = 5

    int numThreads = 1;
    if (argc > 1)
    {
        numThreads = atoi(argv[1]);  //assiging input to numthreads, ascii to integer cuz always inputs as string|#include<stdlib.h>
    }

    //1000 -> 5 Threads => 1000/5 -> returned to chunk
    int chunk = 1000 / numThreads;

    struct threadArgs tArgs[numThreads];

    pthread_t threadIds[numThreads];

    // 1000 % 2 -> 333 333 333 %(Remainder) 1
    // 334 333 333
    // 142 142 142 142 142 142 142 (for 7 threads)
    // 143 143 143 143 143 143 142 (equally dividing the load)
    int sliceList[numThreads];
    int remainder = 1000 & numThreads;

    for (int k = 0; k < numThreads; k++)
    {
        sliceList[k] = 1000 / numThreads;
    }

    for (int n = 0; n < remainder; n++)
    {
        sliceList[n] = sliceList[n] + 1;
    }

    int startList[numThreads];
    int endList[numThreads];
    // sliceList ={334, 333, 333}
    // startList = {1, 335, 668}
    // endList = {334, 667, 1000}

    for (int m = 0; m < numThreads; m++)
    {
        if (m == 0)
        {
            startList[m] = 1;
        }
        else
        {
            startList[m] = endList[m - 1] + 1;
        }
        endList[m] = startList[m] + sliceList[m] - 1;
    }
    
    
    // 1000
    // 1-200    201-400     401-600     601-800     801-1000 
    for (int i = 0; i < numThreads; i++)
    {
        tArgs[i].threadId = i;
        tArgs[i].start = startList[i];
        tArgs[i].end = endList[i];
        pthread_create(&threadIds[i], NULL, threadMain, &tArgs[i]);
    }
    
    for (int j = 0; j < numThreads; j++)
    {
        pthread_join(threadIds[j], NULL);
    }    
}