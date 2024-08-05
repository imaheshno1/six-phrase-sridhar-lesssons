#include<stdio.h>
#include<stdlib.h>
#include"arr_common.h"
int main()
{
    //              0  1  2  3  4  5  6  7  8 9
   // int arr [] = { 10,20,30,40,50,60,70,80,90,42,24,43,77,50,27,49};
    //                         42 50 60 70 80 90
  //  int arr [] = {67,23,78,90,12,45,78,25,89,10,15,27,46,73,91,28,30};
    int arr_ind;
    int arr_size;
    int unsorted;
    int shift;
    int safe;
    arr_size = size(arr);
    for ( unsorted = 1; unsorted < arr_size ; unsorted += 1)
    {
        safe = arr [ unsorted ]; // 42
        for ( shift = unsorted - 1; shift >= 0 && arr [ shift ] > safe ; shift-=1)
        {
            arr [ shift + 1] = arr [ shift ];
        }
        arr [ shift + 1 ] = safe;
//        arrPrint(arr, arr_size);
    }


    return EXIT_SUCCESS;
}
