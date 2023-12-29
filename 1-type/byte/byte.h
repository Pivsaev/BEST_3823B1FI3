unsigned char max_byte(unsigned short x){
    int num = x;
    int num_massive[16] = {0};
    for (int k = 0; k < 16; k++)
        num_massive[k] = -1;
    int i = 0;
    while (num > 0){
        num_massive[i] = num % 2;
        num = num / 2;
        i++;
    }
    int ans1 = 0;
    int ans2 = 0;
    int ten = 1;
    for (int j = 8; j <= i-1; j++){
        if (num_massive[j] != -1){
            ans1 = ans1 + num_massive[j] * ten;
            ten *= 10;
        } 
    }
    ten = 1;
    for (int j = 0; j <= 7; j++){
        if (num_massive[j] != -1){
            ans2 = ans2 + num_massive[j] * ten;
            ten *= 10;
        }
    }
    if (ans1 < ans2){
        ans1 = ans1 + ans2;
        ans2 = ans1 - ans2;
        ans1 = ans1 - ans2;
    }
    int number = ans1; 
    int dec_value = 0; 
    int base = 1; 
    int temp = number; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
        dec_value += last_digit * base; 
        base = base * 2; 
    } 
    return dec_value;
}