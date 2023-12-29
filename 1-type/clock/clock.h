int get_time(long long angle) {
    int hour, minutes, sec;
    hour = angle / (21600);
    int angle1;
    angle1 = angle - hour * 21600;
    minutes = (angle1 / 360);
    sec = (angle - (hour * 21600) - minutes * 360) / 6;
    int sum;
    sum = hour * 1000 + minutes *100 + sec;
    return sum;
}