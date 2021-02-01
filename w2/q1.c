// Write a void function which finds and prints the midpoint coordinates of a line. The
// function should take in four parameters (x1, y1, x2 and y2).
// xmid=(x1+x2)/2, ymid=(y1+y2)/2
#include<stdio.h>

void points(int x1, int y1, int x2, int y2){
    int xmid, ymid;
    xmid = (x1 + x2)/2;
    ymid = (y1 + y2)/2;
    printf("The mid co-ordinate is (%d, %d)\n", xmid, ymid);
}


void main(){
    points(1, 4, 3, 6);
}