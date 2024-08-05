
/*

         num
    +----------+
    |  1234    |    <-------- Rvalue   CALL BY VALUE
    +----------+
      6255540       <---------Lvalue   CALL BE REFERENCE
      ptr_2_num
    +----------+
    |  6255540 |    <-------rVALUE
    +----------+
      6255548       <-------lvlaue


      num
      &num
      ptr_2_num
      &ptr_2_num




/*
Array as a parameter
*/


#include<stdio.h>
#include<stdlib.h>
// call by reference
//
int arrPrint(const int arr[6], int size)
{
    int arr_ind;
    for( arr_ind = 0; arr_ind < size; arr_ind += 1)
    {
        printf("%d ", arr [ arr_ind ]);
//        arr [ arr_ind ] -= 10;
    }

    printf("\n");
}
int main()
{
    //              0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15
    int data [] = {69,24,97,25,77,33,25,96,46,14,21,29,42,15,30,56};
    int data_size;
    int data_ind;
    data_size = sizeof data / sizeof ( int );
    arrPrint( data, data_size);
    arrPrint( data, data_size);

    return EXIT_SUCCESS;


}
