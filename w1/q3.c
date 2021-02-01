// WACP to print all triangular number from 1 upto nth term.
// (n*(n+1))/2          E.g. 1, 3, 6, 10, ...

#include<stdio.h>

void main(){
    int num;
    int i;
    int tri;

    printf("Enter the nth number to find triangular series: ");
    scanf("%d", &num);

// i=1, 3rd term, num = 3, tri = 1
// i=2, 3rd term, num = 3, tri = 3
// i=3, 3rd term, num = 3, tri = 6
// i=4, 3rd term, num = 3, tri = 10
    for(i=1; i<=num; i++){
        tri = (i*(i+1))/2;
        printf("i = %d\n", i);
        printf("tri = %d\n", tri);
        printf("The (%d)th term of triangular seried is: %d\n", i, tri);
    }
}