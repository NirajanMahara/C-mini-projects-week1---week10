// WAP to print pattern:
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

#include<stdio.h>

void main(){
    int i; // for row
    int j; // for columns

    for (i=1; i<=5; i++){
        for (j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}