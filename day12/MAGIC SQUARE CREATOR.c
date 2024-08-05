#include<stdio.h>
#include<stdlib.h>
int main()
{
    int dim;
    scanf("%d", &dim);
    int **ms;
    int work_row;
    int work_col;
    int startVal;
    int fillValue;
    ms = ( int ** ) malloc ( dim * sizeof (int *));
    int r;
    for( r = 0; r < dim; r += 1)
    {
        ms [ r ] = (int * ) calloc( dim , sizeof (int ));
    }
    work_col = ( dim /2);
    scanf("%d", &startVal);
    int outerIter;
    int innerIter;
    int ctr;
    fillValue = startVal;
    work_row  = 0;
    for( outerIter = 0; outerIter < dim; outerIter += 1)
    {
            ctr = 1;
        for ( innerIter = 0; innerIter < dim; innerIter += 1 )
        {


            ms [ work_row ] [ work_col ] = fillValue;
            ctr += 1;
            if ( ctr <= dim )
            {
            fillValue += 1;
            work_row -= 1;
            if ( work_row  < 0)
                work_row = dim - 1;
            work_col += 1;
            if ( work_col == dim )
                work_col = 0;
            }
        }
        fillValue += 1;
        work_row+=1;
            if ( work_row == 0)
                work_row = dim - 1;


    }
    int c;
 for( r= 0; r < dim; r+=1, printf("\n"))
 {
     for( c= 0 ; c < dim; c += 1)
     {
         printf("%d ", ms[ r] [ c ]);
     }
 }
    return EXIT_SUCCESS;
}
