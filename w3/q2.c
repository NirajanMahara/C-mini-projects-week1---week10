// Write a program to raise the power of each elements of a matrix of order 2*3 by 2.
// Display the resultant matrix.
#include<stdio.h>

void main() {
    int a[2][3]; // two dimensional 2D array, with 2 row,3 column
    int i, j; // two iterator, one for row, another for column, always in 2D array
    printf("Enter the Array Elements: \n");

    // This Nested for-loop is for scanning 
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("___________________\n");
    
    // This Nested for-loop is for printing the 2D (2x3_matrix) array
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("___________________\n");

    // This Nested for-loop is for raising power of each element
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++){
            a[i][j] = a[i][j] * a[i][j];
        }
    }

    // This Nested for-loop is for printing the 2D (2x3_matrix) array
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
