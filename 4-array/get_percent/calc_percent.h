#include <math.h>

int calc_percent(int matrix[], int size){
    float r = 0;
    float count = 0;
    float percent = 0;
    int maxim = -9999;
    int minim = 9999;
    for (int i = 0; i < size; i++)
    {
        if (matrix[i] > maxim) maxim = matrix[i];
        if (matrix[i] < minim) minim = matrix[i];
        count++;
    }
    r = floor((maxim - minim)/2);
    for (int i = 0; i < size; i++)
    {
        if (matrix[i] > r) 
            percent++;
    }
    return (percent/count)*100;
}