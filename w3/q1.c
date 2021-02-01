// Write a program to input a 1D Array of size 5 and find the largest element in the array
// using pointer notation only.

#include<stdio.h>

// *(a+i) is pointer arithmetic.
// *(a+1) is the second index using pointer notation
// *(a+2) is the third index using pointer notation and likewise

void main(){
    int a[4] = {1, 10, 15, 99};

    int large = *a;

    for (int i=1; i<4; i++) {
        if(*(a+i) > large) {
            large = *(a+i);
        }
    }
    printf("Largest is: %d\n", large);
}