// Write a function that takes two integers as arguments and 
// return the greatest among them.
#include<stdio.h>

int greatest(int a, int b){
    if(a>b){
        return a;
    } else {
        return b;
    }
}

void main(){
    printf("The largest number is: %d\n", greatest(5, 10));
}