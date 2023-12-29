#include <stdlib.h>
#include <math.h>
long long calc_row(int n, long long k){
    if (abs(k)>=pow(10, 9) || abs(n)>=pow(10, 9)){
        return 0;}
    long long sum = 0;
    for (int i = 1; i<=n; i++){
        sum+=i*k;
    }
    return sum;
}