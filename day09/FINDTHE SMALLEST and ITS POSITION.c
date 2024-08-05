/*
Sorting

Arranging

Stable / unstable


Find the largest in an array
{12,88,69,76,60,95,50,20,27,11,77,21,22,38,63,26,55,25,10}

max_element
SMALLEST POSSBILE INTEGER INT_MIN

12
88
95
limits.h

*/


#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include"arr_common.h"
int main()
{
    int arr [] = {18,48,-21,33,77,30,10,45,12,55,50,-69,8,63,72,47,23,3,-22};
    int arr_ind;
    int arr_size;
    int smallest;
    int smallest_ind;
    arr_size = size(arr); // sizeof arr / sizeof arr [ 0 ]
    smallest_ind = 0;
    smallest = arr [ 0 ];
    for ( arr_ind = 1; arr_ind < arr_size ; arr_ind += 1)
    {
        if ( arr [ arr_ind ] < smallest )
        {
            smallest = arr [ arr_ind ];
            smallest_ind = arr_ind;
        }
    }

    printf("%d is the smallest and it is at location %d", smallest, smallest_ind);



    return EXIT_SUCCESS;
}










