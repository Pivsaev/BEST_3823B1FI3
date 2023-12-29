int chess_rook(char a, int b, char c, int d){
    if (a < 'A' || a > 'H' || c < 'A' || c > 'H') 
        return 0;
    if (b < 1 || b > 8 || d < 1 || d > 8) 
        return 0;
    if (((b == d) && (a != c)) || ((a == c) && (b != d))) 
        return 1;
    return 0;
}