#include <math.h>
double limit(double eps, int n_max){
    double a, b;
    if (n_max == 1){
        return 1/sqrt(2);}
    else{
        for (int i = 0; i<n_max; i++){
            a = i/sqrt(i*i+i);
            b = (i+1)/sqrt(pow((i+1),2)+(i+1));
            if (b-a <= eps){
                return b;}}
        return b;}}