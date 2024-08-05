/*
Given an array that is made of pairs except one unique value, find the unique value

{12,32,65,21,21,15,32,12,65}

*/

#include<stdio.h>
#include<stdlib.h>
#include"arr_common.h"

int main()
{
    int arr [] = {12,32,65,21,21,15,32,12,65};
    int arr_ind;
    int arr_size;
    arr_size = size(arr);
    int res;
    for( res =  0, arr_ind = 0; arr_ind < arr_size; arr_ind+=1 )
          res = res ^ arr [ arr_ind ];

    printf("unique element is %d\n", res);



    return EXIT_SUCCESS;
}
