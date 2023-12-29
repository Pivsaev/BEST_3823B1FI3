#include <math.h>
#include <string.h>

void print_level(int level, int total_levels) {
    for (int i = 0; i < total_levels - level; i++) {
        printf(" ");
    }
    for (int i = 0; i < 2 * level - 1; i++) {
        printf("^");
    }
    printf("\n");
}

char* tree_writer(int levels)
{
    for (int i = 0; i < levels - 1; i++) {
        printf(" ");
    }
    printf("*\n");
    for (int i = 1; i <= levels; i++) {
        print_level(i, levels);
    }
    for (int i = 0; i < levels - 1; i++) {
        printf(" ");
    }
    printf("__ __\n");
}

