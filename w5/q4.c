// Write a program that reads ‘n’ from the user and allocates memory to hold
// n integer numbers. Pass these numbers to a function that returns the sum
// and product between them.
#include<stdio.h>
#include<stdlib.h>

void addMul (int arr[], int size, int* add, int* mul) {
    int i;
    for (i = 0; i < size; i++)
    {
        *add = *add + arr[i];
        *mul = *mul * arr[i];
    }
    
}

void main() {
    int n, i;
    printf("Enter the n number to calculate: \n");
    scanf("%d", &n);

    int* ptr = malloc(n*sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &ptr[i]);
    }
    
    int sum = 0;
    int product = 1;

    addMul(ptr, n, &sum, &product);

    printf("Sum is: %d || Multiplication is: %d\n", sum, product);

    free(ptr);
}