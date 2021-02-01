// WAP to find the factorial of a input number.
#include<stdio.h>


// if num = 5
// factorial = 1, i=1, end of loop: fact 1
// factorial = 1, i=2, end of loop: fact 2
// factorial = 2, i=3, end of loop: fact 6
// factorial = 6, i=4, end of loop: fact 24
// factorial = 24, i=5, end of loop: fact 120
void main() {
    int num;
    int factorial = 1;
    int i;

    printf("Enter the number to find a factorial: ");
    scanf("%d", &num);
    for (i=1; i<=num; i++){
        factorial = factorial * i;
    }
    printf("The factorial of (%d) is: %d\n", num, factorial);
}