long long change(int a, int b, int c, int d){  
    unsigned long long cost;
    cost = a*100 + b;
    unsigned long long pay;
    pay = c*100 + d;
    unsigned long long ans;
    if (pay < cost)
        return -1;
    if (b == 0 && d == 0)
        return c-a;
    ans = pay-cost;
    return ans;
}