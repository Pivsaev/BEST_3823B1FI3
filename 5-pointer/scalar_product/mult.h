#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    int result = 0;
    for (int i = 0; i < size; i++) {
        result += vec1[i] * vec2[i];
    }
    return result;
}
