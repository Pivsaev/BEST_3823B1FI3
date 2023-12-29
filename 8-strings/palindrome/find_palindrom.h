#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrom(char text[]) {
    int start = 0;
    int end = strlen(text) - 1;

    while (start < end) {
        if (!isalpha(text[start])) 
        {
            start++;
            continue;
        }
        if (!isalpha(text[end])) 
        {
            end--;
            continue;
        }
        if (tolower(text[start]) != tolower(text[end])) 
        {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}
