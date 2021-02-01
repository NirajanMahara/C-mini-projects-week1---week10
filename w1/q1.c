// WAP to find the sum of odd numbers from 1 to 10.
#include<stdio.h>
void main(){
    int i,sum;

    for(i=0; i<10; i++){
        if(i%2 != 0) {
            sum = sum + i;
        }
    }
    printf("The sum of odd numbers: %d\n", sum);
}