#include <math.h>

void reverse(int* array, int size, int count)
{
    if (size == 0) 
        return;
    
    if (++count >= --size) 
        return;
    
    int temp = array[size];
    array[size] = array[count];
    array[count] = temp;
    reverse(array, size, count);
}

void reverse_array(int* array, int array_size)
{
    reverse(array, array_size, -1);
}