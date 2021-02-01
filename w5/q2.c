// Write a program that reads ‘n’ from the user and allocates memory to hold
// n integer numbers. Pass these numbers to a function that returns the
// average of these numbers.
// Hint: You must make a function that takes two parameters: an array and
// other the length of the array.
#include<stdio.h>
#include<stdlib.h>

float fun (int arr[], int size) {
    int i;
    float sum = 0;
    float average;
    for(i=0; i<size; i++) {
        sum = sum + arr[i];
    }
    average = sum/size;
    return average;
}

void main() {
    int n, i;
    scanf("%d", &n);

    int* p = malloc(n*sizeof(int));

    for(i=0; i<n; i++) {
        scanf("%d\n", &p[i]);
    }
    float average = fun(p, n);
    printf("The Average is: %f\n", average);
    free(p);
}