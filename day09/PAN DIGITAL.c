/*
PAN Digital number

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{

    int freq_arr [ 10 ]= { 0 };
    int freq_arr_ind;
    int freq_arr_size;

    long long int num;
    long long int copy;
    int digit;

    freq_arr_size = 10;

    num = 7809135426;

    copy = num;
     while ( copy != 0)
     {
         digit = copy % 10;
         freq_arr [ digit ] += 1;
         copy /= 10;
     }
     for( freq_arr_ind = 0; freq_arr_ind < freq_arr_size ; freq_arr_ind += 1)
     {
         if ( freq_arr [ freq_arr_ind ] == 0 || freq_arr [ freq_arr_ind ] > 1)
            break;
     }
     if ( freq_arr_ind == 10)
        printf("PAN DIGITAL");
     else
        printf("NOT PAN");

    return EXIT_SUCCESS;
}















