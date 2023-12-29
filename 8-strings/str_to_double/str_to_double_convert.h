#include <math.h>
#include <string.h>

double convert(char num[]){
    long long total = 0, count = 0, i = 0, k = 0; int znak = 1; long double t = 0;
    if (num[0] == '-'){
        znak = -1; i++;}
    while(num[i]!='.'){
        total = total*10+((int)num[i]-48); i++;} i++;
    for (i; num[i]!='\0'; i++){
        count = count*10+((int)num[i]-48); k+=1;}
    t = (total+count*pow(0.1, k))*znak;
    return t;
}