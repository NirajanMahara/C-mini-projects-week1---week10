// Write a program that creates two threads to display the
// numbers from 1-1000. The two threads should equally
// contribute to display the numbers.

#include <stdio.h>
#include <pthread.h>

// Function for displaying number from 1 to 500 (void pointer with void pointer argument)
void *threadOneFunc(void *p) {
    
    int nStart = 1, nEnd = 500;
    int i;

    for ( i = nStart; i <= nEnd; i++)
    {
        printf("From Thread One: %d\n", i);
    }
}

// Function for displaying number from 1 to 500 (void pointer with void pointer argument)
void *threadTwoFunc(void *p) {

    int nStart = 501, nEnd = 1000;
    int i;

    for ( i = nStart; i <= nEnd; i++)
    {
        printf("From Thread Two: %d\n", i);
    }
    
}

void main () {
    pthread_t threadOne, threadTwo;     //variable: -> thread ID declaration

    pthread_create(&threadOne, NULL, threadOneFunc, NULL);      //thread creating -> assigining threadID & threadOneFunc
    pthread_create(&threadTwo, NULL, threadTwoFunc, NULL);      //thread creating -> assigining threadID & threadTwoFunc

    pthread_join(threadOne, NULL);      // Joining (waiter to main function till threadOne is completed)
    pthread_join(threadTwo, NULL);      // Then threadTwo in run in
}