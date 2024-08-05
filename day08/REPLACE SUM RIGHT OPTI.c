#include<stdio.h>
#include<stdlib.h>
int printArr ( const int * arr, int arr_size)
{
    int arr_ind;
    printf("sizeof(arr) = %u\n", sizeof arr);
    for( arr_ind = 0; arr_ind < arr_size; arr_ind += 1)
    {
        printf("%d ", arr[ arr_ind ]);
    }
    printf("\n");
}
int main()
{

    int arr [] = {6,1,9,2,7,4};
    int arr_ind;
    int arr_size;
    int sum;
    sum = 0;
    arr_ind = 0;
    arr_size = sizeof arr / sizeof arr [ ++arr_ind + 12334];
    printArr ( arr, arr_size );
    for( arr_ind = arr_size -1; arr_ind >= 0; arr_ind -= 1)
    {
        sum += arr [ arr_ind ];
        arr [ arr_ind ]=  sum - arr [ arr_ind ] ;
    }
    printArr(arr, arr_size);
    return EXIT_SUCCESS;
}
