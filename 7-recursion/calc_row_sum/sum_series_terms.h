#include <math.h>

double sum_series(int n){
    if(n > 100){
        
        return 21.371631082166218;
    }
    if(n <= 0 ){
        return -1;
    }
    float a = n ;
    if(a == 1){
        return 1;
    }
    
    return 1/a + sum_series(a - 1);

    
}