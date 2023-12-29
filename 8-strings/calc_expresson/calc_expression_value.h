#include <math.h>
#include <string.h>
#include <stdlib.h>

int calculate_expression(char expression[])
{
    char *end;
    long result = strtol(expression, &end, 10);

    if (end == expression) {
        return -1;
    }

    while (*end != '\0') {
        long number = strtol(end + 1, &end, 10);

        if (end == expression + 1){
            return -1;
        }

        if (*(end - 1) == '+'){
            result += number;
        } 
        else if (*(end - 1) == '-'){
            result -= number;
        }else{
            return -1;
        }
    }
    
    printf("%d", result);
    return result;
}