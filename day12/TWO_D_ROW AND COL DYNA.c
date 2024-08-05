#include<stdio.h>
#include<stdlib.h>
int main()
{

    int ** two_d;
        int row;
    int col;
    int row_size;
    int col_size;
    int filler;
    filler = 10;
    scanf("%d", &row_size);
    two_d = (int **) malloc ( row_size * sizeof ( int * ));

    scanf("%d", &col_size);
    // buy memory in a LOOP
    for( row = 0; row < row_size; row += 1)
    {

          two_d [ row ]  = (int *) malloc ( col_size * sizeof(int));
    }
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
    for( row = 0; row < row_size; row += 1)
    {

          free (two_d [ row ]);//  = (int *) malloc ( col_size * sizeof(int));
    }
    free(two_d);




















    return EXIT_SUCCESS;
}
