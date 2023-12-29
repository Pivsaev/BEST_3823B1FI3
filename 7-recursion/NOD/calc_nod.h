#include <math.h>

int nod(int first, int second){
    if(first == 0 || second == 0){
        return -1;
    }
    if(first == second)
    return first;
    int max = first, min = second ;
    if(second > max){
        max = second;
        min = first;
    }
    if (first < 0 && second < 0)
    return -(nod(fabs(max) - fabs(min), fabs(min)));
    if(min < 0)
    return -(nod(max - fabs(min), fabs(min)));
    return nod(max - min, min);
}
