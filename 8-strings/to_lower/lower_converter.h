#include <math.h>
#include <string.h>

void lower(char* str){
    for (int i = 0; str[i]!='\0'; i++){
        if ((int)str[i]>=65 && (int)str[i]<=90){
            str[i]+=32;}}   
}