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
    int temp_arr [ arr_size ]; // VLA Variable length Array
                               // dynamic memory allocation ( malloc(), realloc(), calloc() free() ) - HEAP
                               // STACK - alloca()
                               // cannot be initialized
    int sum_ind;
    arrPrint ( arr, arr_size);
    for ( sum_ind  = 0;  sum_ind < arr_size ; sum_ind += 1)
    {
        sum = 0;
        for ( arr_ind = 0; arr_ind < arr_size ; arr_ind += 1)
        {
            if ( sum_ind != arr_ind)
                sum+= arr[ arr_ind ];
        }
        temp_arr [ sum_ind] = sum;
    }
    for( arr_ind = 0; arr_ind < arr_size ; arr_ind += 1)
    {
        arr [ arr_ind ] = temp_arr [ arr_ind ];
    }
    arrPrint ( arr, arr_size);
    return EXIT_SUCCESS;
}

