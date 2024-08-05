/*


Sum of elements of an array


*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr [] = {6,1,9,2,7,4};
    int arr_ind;
    int arr_size;
    int sum;
    arr_size = sizeof arr / sizeof arr [ -909 ];

    for(arr_ind =0, sum =0; arr_ind < arr_size ; arr_ind += 1)
    {
        sum+= arr [ arr_ind ];
    }
    printf("sum = %d", sum);

    return EXIT_SUCCESS;
}
