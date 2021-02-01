// Write a program that asks the user for two inputs: lower limit and upper limit. Now
// Write a function named display that prints all the numbers between those limits.
// NOTE: You are only allowed to pass one parameter to the function and
// lower limit and upper limit variables should not be made global.in
#include<stdio.h>

// Structure is for grouping variable of same type of different
struct abc
{
    int lower;
    int upper;
};

void display(struct abc a1){    // The parameter is also type of structure with new instance of structure
    int i;
    for (i = a1.lower; i <= a1.upper; i++)
    {
        printf("%d\t\n", i);
    }
    

}

void main(){
    struct abc s1;
    scanf("%d %d", &s1.lower, &s1.upper);
    display(s1);        // Pass by value not reference, passing structure
}
