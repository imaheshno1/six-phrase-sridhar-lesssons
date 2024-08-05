#include<stdio.h>
#include<stdlib.h>
#include"arr_common.h"
void heapSort ( int arr [], int arr_size);
void maxHeapify ( int arr[], int pno, int li);
int main()
{
    int arr[] = {5,15,10,25,55,35,75,45,95,50,70,40,60,90,3};
    int arr_size;
    arr_size = size(arr);
//    arrPrint( arr, arr_size);
    heapSort(  arr, arr_size );
  //  arrPrint ( arr, arr_size );
    return EXIT_SUCCESS;
}
void heapSort ( int arr [], int arr_size)
{
    int numOfParents;
    int pno;
    int left;
    int right;
    numOfParents = arr_size/2;
    int lastIndex;
    lastIndex = arr_size - 1;
    int temp;
    for( pno = numOfParents - 1; pno >= 0; pno -= 1)
    {
/*        left = pno * 2 + 1;
        right = pno * 2 + 2;
        printf("%d -> %d    %d\n", arr[pno], arr [left], arr[ right ]);
        */
        maxHeapify ( arr, pno, lastIndex);
    }
    temp = arr [ 0 ];
    arr [ 0 ] = arr [ lastIndex ];
    arr [ lastIndex ] = temp;
    lastIndex -=1;
    while ( lastIndex )
    {
    maxHeapify ( arr, 0, lastIndex);
    temp = arr [ 0 ];
    arr [ 0 ] = arr [ lastIndex ];
    arr [ lastIndex ] = temp;
    lastIndex -=1;
    }

}
void maxHeapify ( int arr[], int pno, int li)
{
    int left;
    int right;
    int temp;
    left = pno * 2 + 1;
    right = pno * 2 + 2;
    // child
    if ( left > li)
        return;
    // parent with single child
    if ( left == li )
    {

        if ( arr [ left ] > arr [ pno ])
        {
            temp = arr [ left ];
            arr [ left ] = arr [ pno ];
            arr [pno] = temp;
        }
        return;
    }

    // parent with children
    if ( arr [ left ] > arr [ pno ] || arr [ right ] > arr [ pno ])
    {
        if ( arr [ left ] > arr [ right ])
        {
            temp = arr [ left ];
            arr [ left ] = arr [ pno ];
            arr [pno] = temp;
            maxHeapify(arr, left, li);
        }
        else
        {
            temp = arr [ right ];
            arr [ right ] = arr [ pno ];
            arr [pno] = temp;
            maxHeapify(arr, right, li);

        }
    }
}
