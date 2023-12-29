#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    if (aM!=bN && aN!=bM)
        return NULL;
    int* matrix = malloc(aM*bN * sizeof(int)), t = 0, total = 0;
    for (int i = 0; i<aM; i++){
        total = i;
        for (int j = 0; j<aM*aN; ){
            for (int k = 0; k<aM*aN; k++){
                if (k%aM == i){
                    t+= A[j]*B[k]; j++;}}
            matrix[total] = t;
            total+=aM;
            t = 0;}}
    int *p = matrix;
    return p;
}