#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool compare_double(double x, double y) {
    if ((float) x == (float) y){
        return true;}
    return false;
}
int get_nearest_int(double x) {
    return rint(x);
}
double get_fractional(double x) {
    return x-floor(x);
}