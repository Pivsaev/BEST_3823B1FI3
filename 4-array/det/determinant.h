#include <math.h>  
#include <stdlib.h> 

int det(int matrix[], int n)
{
    if (n == 2)
    {
        return matrix[0] * matrix[3] - matrix[1] * matrix[2];
    }
    else
    {
        int d = 0;
        for (int i = 0; i < n; ++i)
        {
            int size = (n - 1) * (n - 1), sign, ind = 0;
            int* minor = malloc(sizeof(int) * (n - 1) * (n - 1));
            for (int j = n; j < n * n; ++j)
            {
                if (j % n != i)
                {
                    minor[ind++] = matrix[j];
                }
            }
            if (i % 2 == 0)
                sign = 1;
            else
                sign = -1;
            d += sign * matrix[i] * det(minor, n - 1);
        }
        return d;
    }
}

int determinant(int matrix[], int size)
{
    if ((int)sqrt(size) * (int)sqrt(size) != size)
        return -404;
    return det(matrix, sqrt(size));
}