#include <math.h>

int* find_even(int* arr, int size){
    int k = 1 ;
    while(1){
        if ( k == size )
        return 0 ;
        if(*arr % 2 == 0 ){
            return arr;
        }
        k += 1 ;
        arr += 1;
    }
    
}
