long fib(int m){
    if (m < 0) return -1;
    int f0 = 0;
    int f1 = 1;
    int help = 0;
    long long sum = 1;
    while (f1 <= m){
        help = f1;
        f1 = f0 + f1;
        f0 = help;
        sum += f1;
    }
    return sum-f1;
}