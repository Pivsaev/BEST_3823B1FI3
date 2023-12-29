#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int QuadraticEquation(double a, double b, double c){
    int d, x1, x2;
    d = b*b-4*a*c;
    if (d>0){
        x1 = (-b + sqrt(d))/2*a;
        x2 = (-b - sqrt(d))/2*a;
        return rint(x1+x2);
    }else if (d == 0){
        x1 = -b/(2*a);
        return rint(x1);
    }else{
        x1 = -b/(2*a);
        return rint(x1*2);
    }

}