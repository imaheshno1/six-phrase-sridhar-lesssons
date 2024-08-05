#include<stdio.h>
#include<stdlib.h>
int main()
{
    int two_d [6] [ 10 ];
    // two_d
    // [ 6 ]
    // [ 10 ]
    // int
    int row;
    int col;
    int row_size;
    int col_size;
    int filler;
    filler = 10;
    row_size = sizeof ( two_d ) / sizeof (two_d [ 0 ]);
    col_size = sizeof  two_d[ 0 ] / sizeof two_d[0][0];
    printf("sizeof(two_d) = %u\n", sizeof(two_d));
    printf("sizeof(two_d[0]) = %u\n", sizeof(two_d[0]));
    printf("sizeof(two_d[0][0]) = %u\n", sizeof(two_d[0][0]));
    for( row = 0; row < row_size ; row += 1)
    {
        for( col = 0; col < col_size ; col += 1)
        {
            two_d [ row ] [ col ] = filler;
            filler+=1;
        }
    }
    for( row = 0; row < row_size ; row += 1, printf("\n"))
    {
        for( col = 0; col < col_size ; col += 1)
        {
            printf("%d " , two_d [ row ] [ col ] );
        }
    }



    return EXIT_SUCCESS;
}
