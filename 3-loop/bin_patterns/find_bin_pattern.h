#include <math.h>
char find_bin_pattern(int number){
    int num = number;
    int num_massive[50];
    for (int k = 0; k < 50; k++)
        num_massive[k] = -1;
    int i = 0;
    while (num > 0){
        num_massive[i] = num % 2;
        num = num / 2;
        i++;
    }
    int count = 0;
    for (int j = 0; j < i-2;j++)
        if ((num_massive[j]*100 + num_massive[j+1]*10 + num_massive[j+2]) == 101)
            count+=1;
    return count;
}