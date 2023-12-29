#include <math.h>

void first(double* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] += 1;
    }
}

void second(double* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = sqrt(fabs(array[i]));
    }
}

void third(double* array, int size)
{
    double sum = 0, avg;

    for (int i = 0; i < size; i++){
        sum += array[i];
    }

    avg = sum / size;

    for (int i = 0; i < size; i++){
        array[i] = pow(array[i], avg);
    }
}

void fourth(double* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        if ((int)array[i] % 2 == 0)
            array[i] = (int)array[i] * (-1);
        else 
            array[i] = pow((int)fabs(array[i]), -1);
    }
}

void fifth(double* array, int size){
    for (int i = 0; i < size; i++)
    {
        if (((int)array[i] % 2 == 0) && (i % 2 == 0)) 
            array[i] = 0;
    }
}

void sixth(double* array, int size){
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0) 
            array[i] = -1;
        else 
            array[i] = 1;
    }
}

void transform(double* array, int size, int* comands, int comands_count){
    for (int i = 0; i < comands_count; i++)
    {
        switch (comands[i])
        {
            case 1: 
                first(array, size); 
                break;
            case 2: 
                second(array, size); 
                break;
            case 3: 
                third(array, size); 
                break;
            case 4: 
                fourth(array, size); 
                break;
            case 6: 
                sixth(array, size); 
                break;
        }
    }
}
