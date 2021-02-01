//  Write a void function named “equations” which solves simultaneous equations. Your
// program will take six parameters. E.g. function(double a, double b, double c, double d,
// double e, double f){}. By solving simultaneous equations, you are finding where the two
// lines cross each other, so your function should print an x and y coordinate.
// ax+by=c …...(i)
// dx+ey=f........(ii)
// a = number in front of x of equation one
// b = number in front of y of equation one
// c = constant of equation one
// d = number in front of x of equation two
// e = number in front of y of equation two
// f = constant of equation two
#include<stdio.h>

void equations(double a, double b, double c, double d, double e, double f) {
    double x, y;

    x = ((b*f) - (c*e)) / ((b*d) - (a*e));
    y = (c - (a*x)) / b;

    printf("The value of x & y is (%f, %f).\n", x, y);

}

void main(){
    equations(2, 3, 4, 1, 2, 3);
}