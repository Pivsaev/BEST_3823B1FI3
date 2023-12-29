#include <math.h>

unsigned long long calc_e(char order){
    int num = order%48;
    double lie_e;  
    double j = 5.0; 
    long double e =  2.7182818284;
    for (int i = 5; i<=1000000; i++){
        lie_e = pow((1 + 1/j), j);
        j++;
        if (trunc(e*pow(10, num)) == trunc(lie_e*pow(10, num))){
            return i;
            break;
        }
    }
    return 0;
}