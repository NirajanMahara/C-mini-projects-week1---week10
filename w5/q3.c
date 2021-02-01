// Write a program that allocates memory space as required by the user for
// three arrays. User enters the numbers for two arrays and the program
// sums the corresponding array elements and stores them in the third array.
#include<stdio.h>
#include<stdlib.h>

void main() {
    int n;
    int i;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

//  pointers for allocating the three different arrays
    int* p = malloc(n*sizeof(int));
    int* q = malloc(n*sizeof(int));
    int* sum = malloc(n*sizeof(int));

    printf("Enter the elements of 1st array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    
    printf("Enter the elements of 2nd array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &q[i]);
    }

    printf("Elements of sum array\n");
    for (i = 0; i < n; i++)
    {
        sum[i] = p[i] + q[i];
        printf("%d\t", sum[i]);
    }
    printf("\n");
    free(p);
    free(q);
    free(sum);
}