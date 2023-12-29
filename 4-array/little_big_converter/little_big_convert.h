#include <math.h>
unsigned int little_big_convert(unsigned int input){ 
    return (unsigned char)input * 256 * 256 * 256 + (unsigned char)(input >> 8) * 256 * 256 + (unsigned char)(input >> 16) * 256 + (unsigned char)(input >> 24);
}