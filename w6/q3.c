// Create a structure named COMPLEX containing real and imaginary as its
// members. Write a program that uses the above structure to input two complex
// numbers and pass them to function, which returns the sum of entered complex
// numbers in the main function.
#include<stdio.h>

struct complex
{
    float real;
    float imag;
};

struct complex add (struct complex c1, struct complex c2) {
    struct complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;
    return c;
}

void main() {
    struct complex s1 = {10, 20};
    struct complex s2 = {5, 5};
    struct complex s = add(s1, s2);
    printf("Real: %f Imaginary: %f\n", s.real, s.imag);
}
