#include<stdio.h>
#include<stdlib.h>
#include"arr_common.h"
int main()
{
    int arr [] = {6,1,9,2,7,4}; // array
    int arr_ind;
    int arr_size;
    int sum;
    arr_size = sizeof arr / sizeof arr [ -909 ];
    arrPrint ( arr, arr_size);
    sum = 0;
        for ( arr_ind = 0; arr_ind < arr_size ; arr_ind += 1)
        {
               sum+= arr[ arr_ind ];
        }
    for( arr_ind = 0; arr_ind < arr_size ; arr_ind += 1)
    {
        arr [ arr_ind ] = sum - arr [ arr_ind ];
    }
    arrPrint ( arr, arr_size);
    return EXIT_SUCCESS;
}


