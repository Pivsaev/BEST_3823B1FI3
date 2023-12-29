#include <math.h>
#include <stdlib.h>
#include <stdio.h>

char find_digit(double number, char digit){
    long long num_whole; double num_frac;

    int index=0, arr_whole[20] = {0}, arr_frac[20] = {0}, t;

    long long num2, count = 0;

    num_whole = (long long) number;
    num_frac = number - num_whole;
    while (num_whole>0){
        arr_whole[index] = num_whole%10;
        num_whole = num_whole/10;
        index++;
    }

    for (int i = 19; i>=0; i--){
        if (arr_whole[i]!=0){
            t = i;                      //t - счетчик количества цифр в числе
            break;
        }
    }

    for (int i = 19; i>=0; i--){
        if (i<=t){
            count+=1;
            if (arr_whole[i] == digit){
                return count;
            }
        }
    }

    count++;                       //учет точки
    num_frac = num_frac*1000000000000;
    num2 = num_frac;
    index = 0;

    while (num2>0){
        arr_frac[index] = num2%10;
        num2/=10;
        index++;
    }

    for (int i = 19; i>=0; i--){
        if (arr_frac[i]!=0){
            t = i;
            break;
        }
    }

    for (int i = 19; i>=0; i--){
        if (i<=t){
            count++;
            if (arr_frac[i] == digit){
                return count;  
            }
        }
    }
    return -1;
}