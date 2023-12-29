#include <math.h>

char robot_move(int xs[], int ys[], int num_points, int area_radius, int xt, int yt)
{
    for(int i = 0; i < num_points; i++)
    {
        for(int j = 0; j < num_points; j++)
        {
            if (i != j && 0 <= pow((((double)(ys[i] - ys[j]) / (double)(xs[i] - xs[j])) * 
                ((double)ys[i] - ((double)(ys[i] - ys[j]) / (double)(xs[i] - xs[j])) * xs[i]) - xt - yt * 
                ((double)(ys[i] - ys[j]) / (double)(xs[i] - xs[j]))), 2) - (pow((double)(ys[i] - ys[j]) / 
                (double)(xs[i] - xs[j]), 2) + 1) * (xt * xt + pow((double)ys[i] - ((double)(ys[i] - ys[j]) / 
                (double)(xs[i] - xs[j])) * xs[i], 2) - 2 * yt * ((double)ys[i] - ((double)(ys[i] - ys[j]) / 
                (double)(xs[i] - xs[j])) * xs[i]) + yt * yt - area_radius * area_radius))
                return 1;
        }
        return 0;
    }    
}