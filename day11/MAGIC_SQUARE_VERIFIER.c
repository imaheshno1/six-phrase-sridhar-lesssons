#include<stdio.h>
#include<stdlib.h>
/*
startNum
to
startNum + (DIM * DIM )
11 * ((36-11) * ((36-11)+1))/2

1 to 35         630
1 to 10          55
11 to 35        575/5
                115
*/
#define DIM 5
int main()
{

    int mat [ DIM ] [ DIM ] =
    {
    {27,34,11,18,25},
    {33,15,17,24,26},
    {14,16,23,30,32},
    {20,22,29,31,13},
    {21,28,35,12,19}

    };
    int beginNum;
    beginNum = mat [ 0 ] [ DIM / 2];
    int lastNum;
    lastNum = beginNum + (DIM*DIM) - 1;

    int one_to_sum;
    int start_to_sum;
    int checkSum;
    one_to_sum = ( lastNum * (lastNum + 1))/2;
    start_to_sum = ( beginNum * (beginNum - 1)  ) /2;
    checkSum = ( one_to_sum - start_to_sum ) / DIM ;
    printf("%d %d %d\n", one_to_sum , start_to_sum, checkSum);
    int row;
    int col;
    int tot;
    // row

    for( row = 0;  row < DIM ; row += 1)
    {
        tot = 0;
        for( col = 0; col < DIM; col +=1)
        {
            tot += mat [ row ][col];
        }
        if ( tot != checkSum)
        {
            printf("ROW ERROR\n");
            break;
        }
    }
    // col

    for( col = 0;  col < DIM ; col += 1)
    {
        tot = 0;
        for( row = 0; row < DIM; row +=1)
        {
            tot += mat [ row ][col];
        }
        if ( tot != checkSum)
        {
            printf("COL ERROR\n");
            break;
        }
    }
    // right cross diagonal
    tot=0;
    for( row = 0; row < DIM; row+=1)
    {
        tot += mat[row][row];
    }
    if ( tot != checkSum )
        printf("RIGHT DIAG Error\n");
    // right cross diagonal
    tot=0;
    for( row = 0, col = DIM - 1; row < DIM; row+=1, col-=1)
    {
        tot += mat[row][col];
    }
    if ( tot != checkSum )
        printf("LEFT DIAG Error\n");




    return EXIT_SUCCESS;
}
