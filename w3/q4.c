// Write a program that adds individual rows of a 2*3 matrix and 
// store it in a 1D Array.
#include<stdio.h>

void main(){
    int a[2][3] = {{1, 2, 3},{4, 5, 6}};    // Initializing and giving value/or we can make nested for loop to scan elements in matrix, 2D array of 2x3 matrix
    int i,j;        // iterator for Nested For-loop in 2D array
    int sum;        // storing sum of 1-1 row
    int b[2];        // for storing 1D array

    for(i=0; i<2; i++){
        sum = 0;    //only for rows element addition, initializing sum=0, otherwise will sum from 1st -> total
        for (j=0; j<3; j++){
            sum = sum + a[i][j];
        }
        b[i] = sum;     //sum is initized first to 1 and then 2, for 2rows->b[2]
    }

    for(i=0; i<2; i++) {
        printf("%d\n", b[i]);
    }
}