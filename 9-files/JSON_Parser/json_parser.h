#include <stdio.h>
#include <string.h>

unsigned int parse_json(char* str, char* name) {
    char *p;
    char key[50], value[50];
    unsigned int age = 0;

    p = strtok(str, ",:{}");
    while(p != NULL) {
        sscanf(p, "%[^:]:%s", key, value);
        if(strcmp(key, "\"firstName\"") == 0 || strcmp(key, "\"lastName\"") == 0) {
            if(strcmp(value, name) == 0) {
                p = strtok(NULL, ",:{}");
                while(p != NULL) {
                    sscanf(p, "%[^:]:%s", key, value);
                    if(strcmp(key, "\"age\"") == 0) {
                        sscanf(value, "%u", &age);
                        printf("%d", age);
                        return age;
                    }
                    p = strtok(NULL, ",:{}");
                }
            }
        }
        p = strtok(NULL, ",:{}");
    }

    return 0;
}
