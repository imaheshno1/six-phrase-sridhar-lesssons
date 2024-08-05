#define size(x) (sizeof x / sizeof x[0])
int arrPrint(const int *arr, int size)
{
    int arr_ind;
    for( arr_ind = 0; arr_ind < size; arr_ind += 1)
    {
        printf("%d ", arr [ arr_ind ]);
//        arr [ arr_ind ] -= 10;
    }

    printf("\n");
}
void arrReverse( int arr [], int arr_size)
{
    int front;
    int rear;
    int temp;
    for ( front = 0, rear = arr_size - 1; front < rear; front+=1, rear-=1)
    {
        temp = arr [ front ];
        arr [ front ]= arr [ rear ];
        arr [ rear ] = temp;
    }
}
