#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int maxmin(int input[], int size){
    int array[15];
    for (int i = 0; i < 15; i++)
        array[i] = -99999;
    int ans = 0;
    int maximal = -99999;
    if (input[0] < input[1]){
        array[0] = input[0];
        ans++;
    }
        
    if (input[size-2] > input[size-1]){
        array[ans] = input[size-1];
        ans++;
    }
    for (int i = 2; i < size-1; i++){
        if ((input[i-1] > input[i]) && (input[i] < input[i+1])){
            array[ans] = input[i];
            ans++;
        }
    }

    for (int i = 0; i <= ans; i++)
        if ((array[i]  >  maximal) && (array[i] != -99999))
            maximal = array[i];
    return maximal;
}