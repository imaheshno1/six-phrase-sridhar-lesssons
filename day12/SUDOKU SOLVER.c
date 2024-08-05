// 1.52 2:15
#include<stdio.h>
#include<stdlib.h>
#define DIM 9
#define SAFE 1
#define UNSAFE 0

void sudokuSolver(int sudoku [ DIM ] [ DIM ]);
void sudokuSolver_helper( int orig [ DIM ] [ DIM ] , int copy [ DIM ] [DIM ], int solRow, int solCol);
int isSafe( int grid [ DIM ] [ DIM ], int tr, int tc , int tv );

int main()
{
    //                  0,0 - 0,1 - 0,2 - 0,3 - 0,4 - 0,5 - 0,6 -  0,7 - 0,8 - 0,9
 /*   int original[ DIM ][ DIM ] = {
                      {3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}
                      };
*/
int original [ DIM ][ DIM ] = {
                      {0,0,0,8,0,1,0,0,0},
                      {0,0,0,0,0,0,0,4,3},
                      {5,0,0,0,0,0,0,0,0},
                      {0,0,0,0,7,0,8,0,0},
                      {0,0,0,0,0,0,1,0,0},
                      {0,2,0,0,3,0,0,0,0},
                      {6,0,0,0,0,0,0,7,5},
                      {0,0,3,4,0,0,0,0,0},
                      {0,0,0,2,0,0,6,0,0}
                      };

     sudokuSolver ( original );
    return EXIT_SUCCESS;
}

void sudokuSolver(int orig[ DIM ] [ DIM ])
{
    // set an environment
    int copy [ DIM ] [ DIM ];
    int row;
    int col;
    for ( row = 0; row < DIM; row += 1)
    {
        for( col = 0; col < DIM; col += 1)
        {
            copy [ row ] [ col] = orig [ row ][ col ];
        }
    }
    // call the helper - recursively
    sudokuSolver_helper ( orig, copy , 0, 0 );
}

void sudokuSolver_helper( int orig [ DIM ] [ DIM ] , int copy [ DIM ] [DIM ], int solRow, int solCol)
{
    // enumerate all the choices
    // 1 to 9
    static int solved;
    int testValues;
    int wr;
    int wc;
    wr = solRow;
    wc = solCol;

    if ( wc == DIM )
    {
        wr += 1;
        wc = 0;
    }

     // SOL is DOne
     if ( wr == DIM)
     {
         int r;
         int c;
         for (r =0; r < DIM; r += 1, printf("\n"))
         {
             for( c= 0; c< DIM; c+=1)
             {
                 printf("%d ", copy [ r ] [ c ]);
             }
         }
         solved = 1;
         return;
     } // solved
    if ( orig [ wr ] [ wc ] != 0)
    {
            sudokuSolver_helper ( orig, copy, wr,wc+1);
    }
    else
    {
        for ( testValues = 1; testValues <= DIM && solved == 0; testValues += 1)
        {
            if ( isSafe( copy, wr,wc,testValues ) == SAFE)
            {
                copy [ wr ] [ wc ] =  testValues;
                sudokuSolver_helper ( orig, copy, wr, wc+1);
                copy [ wr ] [ wc ] = 0;
            }
        }
    }
}
int isSafe( int grid [ DIM ] [ DIM ], int tr, int tc , int tv )
{
    //
    int row;
    int col;
    // row check
    row = tr;
    for ( col = 0; col < DIM; col += 1)
    {
        if ( grid [row][col] == tv)
            return UNSAFE;
    }
    // col check
    col = tc;
    for(row = 0; row < DIM; row += 1)
    {
       if ( grid [row][col] == tv)
            return UNSAFE;
    }
    // sub matrix
    // 5 7 6
    int sm_sr;
    int sm_sc;
    sm_sr = ( tr / 3) * 3;
    sm_sc = ( tc / 3) * 3;
    int wr;
    int wc;
    for( wr = 0; wr < 3; wr += 1)
    {
        for( wc = 0; wc < 3 ; wc += 1)
        {
            if ( grid [ sm_sr + wr ] [ sm_sc + wc ] == tv)
              return UNSAFE;
        }
    }
    return SAFE;
}













