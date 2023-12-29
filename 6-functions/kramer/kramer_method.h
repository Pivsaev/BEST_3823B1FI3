#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float det_2(int* matrix, int* vector, int size){
    int delta = (matrix[0]*matrix[3] - matrix[1]*matrix[2]), kop[4] = {0}, total = 0;
    float result = 0;
    if (delta == 0)
        return -1;
    for (int i = 0; i<2; i++){
        total = 0;
        for(int h = 0; h<4; h++){
            kop[h] = matrix[h];}
        for (int j = 0; j<4; j++){
            if (j%2 == i){
                kop[j] = vector[total]; total+=1;}}
        result+= (float)(kop[0]*kop[3] - kop[1]*kop[2])/(float)delta;}
    return result;}

float det_3(int* matrix, int* vector, int size){
    int delta = (matrix[0]*matrix[4]*matrix[8]+matrix[1]*matrix[5]*matrix[6]+matrix[3]*matrix[7]*matrix[2]-matrix[2]*matrix[4]*matrix[6]-matrix[1]*matrix[3]*matrix[8]-matrix[0]*matrix[5]*matrix[7]);
    float result = 0;
    int kop[9] = {0}, total = 0;
    if (delta == 0)
        return -1;
    for (int i = 0; i<3; i++){
        total = 0;
        for(int h = 0; h<9; h++){
            kop[h] = matrix[h];}
        for (int j = 0; j<9; j++){
            if (j%3 == i){
                kop[j] = vector[total]; total+=1;}}
        result+=(float)(kop[0]*kop[4]*kop[8]+kop[1]*kop[5]*kop[6]+kop[3]*kop[7]*kop[2]-kop[2]*kop[4]*kop[6]-kop[1]*kop[3]*kop[8]-kop[0]*kop[5]*kop[7])/(float)delta;}
    return result;}

int det_3_1(int* matrix, int size){
    return (matrix[0]*matrix[4]*matrix[8]+matrix[1]*matrix[5]*matrix[6]+matrix[3]*matrix[7]*matrix[2]-matrix[2]*matrix[4]*matrix[6]-matrix[1]*matrix[3]*matrix[8]-matrix[0]*matrix[5]*matrix[7]);}

float key(int* matrix, int size){
    int k = sqrt(size);
    float d = 0; int t=1, total = 0;
    int* s = malloc(sizeof(int)*(k-1)*(k-1));
    for (int i = 0; i<size; i++){
        total = 0;
        if (i%k == 0){
            t=matrix[i]*pow(-1, (i/k+1)+1);
            for (int j = 0; j<size; j++){
                if (j/k!=i/k && j%k!=0){
                    s[total] = matrix[j]; total+=1;}}
        if ((k-1)*(k-1) == 9){
            d+=(float)t*det_3_1(s, 9);}
        else{
            d+=(float)t*key(s, (k-1)*(k-1));}}}
    return d; 
}

float det(int* matrix, int* vector,int size){
    int delta = key(matrix, size);
    int k = sqrt(size);
    float d = 0; int t=1, total = 0;
    int* s = malloc(sizeof(int)*(k-1)*(k-1));
    int* kop = malloc(sizeof(int)*size);
    for (int l = 0; l<k; l++){
        for(int h = 0; h<4; h++){
            kop[h] = matrix[h];}
        for (int m = 0; m<k; k++){
            if (m%k == l)
                kop[m] = vector[m];}
        for (int i = 0; i<size; i++){
            total = 0;
            if (i%k == 0){
                t=kop[i]*pow(-1, (i/k+1)+1);
                for (int j = 0; j<size; j++){
                    if (j/k!=i/k && j%k!=0){
                        s[total] = kop[j]; total+=1;}}
            if ((k-1)*(k-1) == 9){
                d+=(float)t*(float)det_3(s, vector, 9);}
            else{
                d+=(float)t*(float)det(s, vector, (k-1)*(k-1));}}}}
        return d/(float)delta; 
}


double kramer_method(int* matrix, int* vector, int size){

    int s = size*size;
    if (s == 4){
        return det_2(matrix, vector, s);}
    else if (s == 9){
        return det_3(matrix, vector, s);}
    else{
        return det(matrix, vector, s);}
}
