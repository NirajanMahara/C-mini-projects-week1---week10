// Write a function named “velocityCalc” which returns an appropriate value for the
// formula “v=u+at”, where v is the final velocity, u is the initial velocity ,a is the
// acceleration and t is the time that has elapsed. Depending upon which variable is set to
// “NAN” "Not a Number" when the function is called , your function should work it out and return the value.
#include<stdio.h>
#include<math.h>

//NAN math.h
//NAN floating point value
float velocityCalc(float v, float u, float a, float t){

    //v = u+at
    if(isnan(v)){
        return (u + (a * t));
    }

    //u = v-at
    else if(isnan(u)){
        return (v - (a * t));
    }

    //t = (v-u)/a
    else if (isnan(t)){
        return (v - u)/a;
    }

    //a = (v-u)/t
    else{
        return (v - u)/t;
    }
}

void main(){

    printf("The Final Velocity is: %f\n", velocityCalc(NAN, 0, 10, 2));

    printf("The Total Time taken is: %f\n", velocityCalc(20, 0, 10, NAN));

}