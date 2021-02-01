// Write a program that allocates n integers of an array dynamically and find
// the largest element in the array.
#include<stdio.h>
#include<stdlib.h>

void main() {
    int n, i;
    scanf("%d", &n);
    int* p = malloc(n*sizeof(int));     // malloc allocates memory dynamically, according to the datatype 

    for (i=0; i<n; i++) {
        scanf("%d", &p[i]);
    }

    int large = p[0];   // initialized large variable with the first element of array of pointer variable

    for(i=1; i<n; i++) {
        if (p[i] > large) {     // it p[i] are large then it will be assigned to large varaible otherwise there is always large assigned to first element of array
            large = p[i];
        }
    }
    printf("The largest element in the array: %d\n", large);
}