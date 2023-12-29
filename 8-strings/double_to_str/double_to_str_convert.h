#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(double number) {
    char* str = (char*) malloc(50 * sizeof(char));
    sprintf(str, "%f", number);

    char* dot_position = strchr(str, '.');
    if (dot_position != NULL) 
    {
        char* end = str + strlen(str) - 1;
        while (end > dot_position && *end == '0') 
        {
            *end-- = '\0';
        }
        if (*end == '.') 
        {
            *end = '\0';
        }
    }

    return str;
}