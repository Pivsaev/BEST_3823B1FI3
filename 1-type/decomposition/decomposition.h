int reverse(int number) 
{
    int ans = 0, i = 1000, c;
    while (number > 0)
    {
        c = number % 10;
        if (c != 0)
            ans += c * i;
        i /= 10;
        number /= 10;
    }
    return ans; 
}
double decomposition(int number){
    double a, b, c, d;
    
    a = 1 / ((double)(number / 1000) * 1000);
    b = 1 / ((double)(number / 100 % 10) * 100);
    c = 1 / ((double)(number % 100 / 10) * 10);
    d = 1 / (double)(number % 10);

    return 4 / (a + b + c + d);
}
int append(int number, int start, int end){
    if (start < 0)
        return (start * 10000 - number) * 10 - end;
    else
        return (start * 10000 + number) * 10 + end;
}
