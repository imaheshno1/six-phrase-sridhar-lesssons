#include<stdio.h>
#include<stdlib.h>
#include"arr_common.h"
int main()
{
    int arr [18] = {12,88,69,76,60,95,50,20,27,77,21,22,38,63,26,55,25,10};

    int arr_size;
    int rot_factor;
    arr_size = sizeof arr / sizeof arr [ 10 ];
    scanf("%d", &rot_factor);
    rot_factor = (rot_factor % arr_size);

    arrPrint( arr, arr_size );
    // rotate
    if ( rot_factor )
    {
    arrReverse ( arr, arr_size );
    arrPrint( arr, arr_size );

    arrReverse (arr, rot_factor);
    arrPrint( arr, arr_size );

    arrReverse (arr+rot_factor, arr_size-rot_factor);
    arrPrint ( arr,arr_size );
    }


    return EXIT_SUCCESS;
}




/*

a b c d

d a b c
c d a b
b c d a
a b c d
*/














