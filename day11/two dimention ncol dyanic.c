#include<stdio.h>
#include<stdlib.h>
int main()
{
   // int twoD[5] [6 ]
    int * mat [ 5 ] ;
    int hmc;
    scanf("%d", &hmc);
    int ind;
    for( ind = 0; ind < 5; ind += 1)
    {
        mat [ ind ] = (int * ) malloc ( hmc * sizeof (int));
    }
    int row;
    int col;
    int number;
    number = 10;
    for( row = 0; row < 5; row += 1)
    {
        for( col = 0; col < 6; col +=1)
        {
            mat [ row ] [ col ] = number;
            number += 1;
        }
    }
    for( row = 0 ; row < 5 ; row += 1)
    {
        printf("mat[%d] = %u\n", row, mat [ row ]);
    }

    for( row = 0; row < 5; row += 1, printf("\n"))
    {
        for( col  = 0;col < 6; col += 1)
        {
            printf("%d ", mat [ row] [ col ]);
        }
    }



    return EXIT_SUCCESS;
}


