#include <math.h>

void get_max_min(int* array, int size, int* pMax, int* pMin){
    *pMax = array[0]; *pMin = array[0];
    for (int i = 0; i<size; i++){
        if (array[i]>*pMax)
            *pMax = array[i];
        if (array[i]<*pMin)
            *pMin = array[i];
    }
    
}