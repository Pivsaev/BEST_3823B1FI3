#include <math.h>
char count_max_digit(long long int x){
    long long help;    
    int arr[10] = {};
    for (int j = 0; j < 10; j++){
        arr[j] = 0;
    }
    x = fabs(x);
    while (x > 0){
        help = x % 10;
        arr[help] = arr[help] + 1;
        x = x / 10;
    }
    int count = 0;
    for (int j = 9; j >= 0; j--){
        if (arr[j] > count){
            count = arr[j];
            break;
        }   
    }
    return count;
}