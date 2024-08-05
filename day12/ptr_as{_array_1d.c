#include<stdio.h>
#include<stdlib.h>
int main()
{

int * arr;
    arr = (int * ) malloc ( 10 * sizeof(int));
    int arr_ind;
    for( arr_ind = 0; arr_ind < 10 ; arr_ind += 1)
    {
        scanf("%d", arr+arr_ind); // scanf ( "%d", &arr [ arr_ind] );
    }
    for( arr_ind = 0; arr_ind < 10 ; arr_ind += 1)
    {
        printf("%d\n", arr[arr_ind]);
    }
    free(arr);
// memory will be deallocated

    return EXIT_SUCCESS;
}

