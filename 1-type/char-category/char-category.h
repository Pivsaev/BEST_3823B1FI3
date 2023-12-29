#include <stdbool.h>

bool is_digit(char x){
    int b;
    b = (int)x;
    if (b >= 48 && b <= 57){
    return true;
    }else{
    return 0;
    }
}

bool is_letter(char x){
    int b;
    b = (int)x;
    if ((b >= 65 && b <= 90) || (b >=97 && b <= 122)){
    return true;
    }else{
    return 0;
    }
}

bool is_punctuation(char x){
    int b;
    b = (int)x;
    if ((b >= 33 && b <= 47) || (b >= 58 && b <= 64) || (b >= 91 && b <= 96) || (b >= 123 && b <=126)){
    return true;
    }else{
    return 0;
    }
}

int get_ascii_code(char first, char second, char third){
    int fir, sec, thir;
    fir = (int)first;
    sec = (int)second;
    thir = (int)third;
    int sum;
    sum = (fir * 1000000) + (sec * 1000) + thir;
    return (sum);
}
