#include <math.h>
int binarysearch(int a, int mass[], int n)
{
    int low, high, middle, count;
    low = 0;
    high = n - 1;
    count = 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (a < mass[middle]){
            high = middle - 1;
            count++;
        }
        else if (a > mass[middle]){
            low = middle + 1;
            count++;
        }
            
        else return middle*count;      
    }
    return -1;
}

int find_elem(int left, int right, int number, int max_iter){
    int i = 0;
    int size = right - left + 1;
    int arr[size];
    for (int i = 0; i < size - 1; i++){
        arr[i] = left;
        left++;
    } 
    i = binarysearch(number, arr, size);
    return i;
}