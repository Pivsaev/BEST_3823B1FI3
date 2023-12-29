#include <math.h>
int hole_finder(int matrix[], int length, int width){
    int min = 99999;
    int x = 0;
    int j = 0;
    for (int i = 0; i<length*width; i++){
        if (matrix[i]<min){
            x = i/width;
            j = i-(x*width);
            min = matrix[i];
        }
    }
    return x*100+j;
}