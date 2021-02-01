// Write a program to find the sum of elements on the of a 3*3 matrix.
#include<stdio.h>

void main() {
    int a[3][3];    //3x3 matrix = 2D
    int i, j;       //2 iterator for 2D array
    int sum = 0;    //initializing the sum=0

    printf("Enter Array Elements: \n");

//  This is just for scanning 3x3 matrix element
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

//  This loop keep on adding all the elements of the matrix
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {    
                sum = sum + a[i][j];
        }
    }
    printf("The total sum is %d\n", sum);
}