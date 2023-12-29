int chocolate(int n, int m, int k){
    if (m < 0 || n < 0)
        return 0;
    if (k == n * m)
        return 1;
    if (k < n * m && ((k % n == 0) || (k % m == 0)))
        return 1;
    return 0;
}