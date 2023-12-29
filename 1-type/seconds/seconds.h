#include <math.h>

int get_years(int seconds){
    int year;
    year = (seconds / (60 * 60 * 24 * 31 * 12)) + 1970;
    return year;
}
int get_month(int seconds){
    int month;
    month = (seconds / (60 * 60 * 24 * 31)) % 12;
    return month;
}
int get_day(int seconds){
    int day;
    day = (seconds / (60 * 60 * 24)) % 31;
    return day;
}
int get_hours(int seconds){
    int hours;
    hours = (seconds % (60 * 60 * 24)) / 3600;
    return hours;
}
int get_minutes(int seconds){
    int min;
    min = ((seconds % (60 * 60 * 24)) % (60*60)) / 60;
    return min;
}
int get_seconds(int seconds){
    seconds = ((seconds % (60 * 60 * 24)) % (60 * 60)) % 60;
    return seconds;
}
int get_magical_value(int seconds){
    int year = get_years(seconds);
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
    int s = ((year + month) / (1 + day + second)) * ((year + month) / (1 + day + second)) + (minutes + (minutes / (1 + hours))) / (1 + hours);
    return s;
}