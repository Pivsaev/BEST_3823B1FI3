#include <math.h>

double integral(double a, double b, double c, double left, double right){
    double pl1, pl2, s;
    pl1 = (a*pow(right, 3)/3 + b*pow(right, 2)/2 + c*right);
    pl2 = (a*pow(left, 3)/3 + b*pow(left, 2)/2 + c*left);
    s = pl1-pl2;
    if (s>0)
        return s;
    else
        return -1;
}