#include<stdio.h>
#include<stdlib.h>
#include"arr_common.h"
int main()
{
    int arr [] = {63,51,99,49,37,32,23,82,55,77,21,90,13,22,25};
    int arr_size;
    arr_size = sizeof arr / sizeof arr [  0 ];
    arrPrint(arr, arr_size );
    arrReverse ( arr, arr_size );
    arrPrint ( arr, arr_size);


    return EXIT_SUCCESS;
}
