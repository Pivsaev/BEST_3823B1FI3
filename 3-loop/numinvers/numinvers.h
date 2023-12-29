int num_invers(int num){
    int m = 0;
    if (num>=0){
    while(num>0){
        m = m*10+num%10;
        num /= 10;}
        return m;}
    return 0;}