#include <math.h>
#include <string.h>

char DelSymbol1(char *str, char sym){
    int j;
    for(int i = 0; i<strlen(str)+1; i++){
        if (str[i-1] == sym){
            i = i-1;}
        if (str[i] == sym){
            for (j = i; j<strlen(str); j++){
                str[j] = str[j+1];}
        str[j] = '\0';}
    }
}


