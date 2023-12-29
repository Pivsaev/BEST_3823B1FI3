char left_more(double input[], unsigned int size){
    int ans = 0;
    for (int i = 1; i <size; i++)
        if (input[i] > input[i-1]) ans++;
    return ans;
}