#include<stdio.h>
#include<stdlib.h>
#include"arr_common.h"
void quickSort ( int arr [], int arr_size);
void qs_helper( int arr[], int begin, int last);
int main ()
{
    int data [] = {34,56,77,12,89,66,24,42,56,45,80,11,78,90,48,36,88,77,90,28,46};
    int data_size;
    data_size = size(data);
    arrPrint ( data, data_size );

    quickSort(data, data_size);
    arrPrint ( data, data_size );

    return EXIT_SUCCESS;
}
void quickSort ( int arr [], int arr_size)
{
    // set an environement
    qs_helper ( arr, 0, arr_size - 1);
}


void qs_helper( int arr[], int begin, int last)
{
    int lg;
    int sg;
    int pivot;
    int temp;
    //printf("begin = %d last = %d\n",begin, last);
    if ( begin > last)
    {
        return;
    }
    lg = begin;
    sg = last - 1;
    pivot = arr [ last ];
    while ( lg <= sg )
    {
    while ( lg < last && arr [ lg ] < pivot )
    {
        lg += 1;
    }
    while ( sg >= begin && arr [sg] >= pivot )
    {
        sg-=1;
    }
    if ( lg < sg )
    {
    temp = arr[ lg ];
    arr [ lg ] = arr [ sg ];
    arr [ sg ] = temp;
    }
    }
    temp = arr [ lg ];
    arr [ lg ] = pivot;
    arr [ last ] = temp;
    qs_helper(arr, begin, lg-1);
 qs_helper(arr, lg+1, last);

}






