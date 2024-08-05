#include<stdio.h>
#include<stdlib.h>
#define DIM 9
void zeroFill( int arr [] )
{
    int arr_ind;
    for( arr_ind = 0; arr_ind < 10; arr_ind += 1)
        arr[ arr_ind  ] = 0;
}
#define FALSE 0
#define TRUE 1
int verifier ( int arr []  )
{
    int arr_ind;
    for( arr_ind = 1; arr_ind <= DIM; arr_ind += 1)
        if ( arr [ arr_ind ] == 0 ) return FALSE;

    return TRUE;
}
int main()
{
    int rerr;
    int cerr;
    int smerr;
    rerr = FALSE;
    cerr = FALSE;
    smerr = FALSE;
    int sudoku[DIM][DIM] =
     {
         {4,3,5,2,6,9,7,8,1},
         {6,8,2,5,7,1,4,9,3},
         {1,9,7,8,3,4,5,6,2},
         {8,2,6,1,9,5,3,4,7},
         {3,7,4,6,8,2,9,1,5},
         {9,5,1,7,4,3,6,2,8},
         {5,1,9,3,2,6,8,7,4},
         {2,4,8,9,5,7,1,3,6},
         {7,6,3,4,1,8,2,5,9}
     };
     int row;
     int col;
     int occurs_array [ 10 ] = { 0 };
     // row verify
     for( row = 0; row < DIM; row += 1) // 0 to dim-1
     {
         for( col = 0; col < DIM; col += 1) // 0 to dim-1
         {
             occurs_array [ sudoku [row] [col] ] = 1;
         }
         if ( verifier ( occurs_array ) == FALSE )
         {
             printf("ROW Error\n");
             rerr = TRUE;
             break;
         }
         else
            zeroFill(occurs_array);
     }

     // col verify
     for( col = 0; col < DIM; col += 1) // 0 to dim - 1
     {
         for( row = 0; row < DIM; row += 1) // 0 to dim -1
         {
             occurs_array [ sudoku [row] [col] ] = 1;
         }
         if ( verifier ( occurs_array ) == FALSE )
         {
             printf("COL Error\n");
             cerr = TRUE;
             break;
         }
         else
            zeroFill(occurs_array);

     }
     // SUB MATRIX
     {
         int r;
         int c;
         int sm_br;
         int sm_bc;
         int wr;
         int wc;
         for( r = 0; r < 3; r += 1)
         {

             for( c = 0; c< 3; c+= 1)
             {
                 sm_br = 3 * r;
                 sm_bc = 3 * c;
                 for( wr = 0; wr < 3 ; wr += 1)
                 {
                     for ( wc = 0; wc < 3; wc += 1)
                     {
                         occurs_array [ sudoku [sm_br+wr] [sm_bc+ wc] ] = 1;
                     }
                 }
                     if ( verifier ( occurs_array) == FALSE )
                     {
                         printf("Sub Matrix ERROR \n");
                         smerr = TRUE;
                         break;
                     }
                     else
                        zeroFill(occurs_array);

             }
             if( smerr == TRUE)
                break;
         }

     }
     if ( rerr == FALSE && cerr == FALSE && smerr == FALSE )
        printf("ALL IS WELL\n");
return EXIT_SUCCESS;
}
