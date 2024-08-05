#include<stdio.h>
#include<stdlib.h>
void qs_helper( int arr[] , int startInd, int endInd)
{
    int lf;
    int sf;
    int temp;
    int pivotVal;
    if ( startInd >= endInd )
        return;
    pivotVal = arr [ endInd ];
    lf = startInd;
    sf = endInd - 1;
 while ( 1)
 {
    // get larger
    while ( lf < endInd && arr[lf] < pivotVal)
        lf += 1;
    // get smaller
    while ( sf >= startInd && arr [ sf ] >= pivotVal)
        sf-=1;
     // printf("%d %d\n", lf, sf);
    if ( lf > sf )
    {
        break;
    }
    else
    {
        temp = arr [ lf ];
        arr [ lf ] = arr [ sf ];
        arr [ sf ] = temp;
    }
}
temp = arr [ endInd ];
arr [ endInd ] = arr [ lf];
arr [ lf ] = temp;
qs_helper(arr, startInd, lf - 1);
qs_helper(arr, lf+1, endInd);
}

void qs(int arr[], int arr_size)
{
    // set an env
    // call helper recursively
    qs_helper(arr, 0, arr_size - 1);
}







int main()
{
   int arr [ ] = {45,67,12,23,78,90,57,37,38,99,10,34,77,44,55,42};
   int arr_size;
   arr_size = sizeof(arr) / sizeof (arr [ 0 ]);
   qs(arr, arr_size );
   int arr_ind;
   for( arr_ind = 0 ; arr_ind < arr_size ; arr_ind += 1)
    printf("%d ", arr[arr_ind]);
}







