#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    if (size > sizeof(unsigned long long)) {
        return 0;
    }
    unsigned long long result = 0;
    for (int i = 0; i < size; ++i) {
        result |= (unsigned long long)arr[i] << (8 * i);
    }
    return result;
}
unsigned char unpack_ull(unsigned long long input){
    return (input >> 32) & 0xFF;
}