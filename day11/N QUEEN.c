#include<stdio.h>
#include<stdlib.h>
void n_queen_solver ( int noq ); // number of queens
void n_queen_solver_helper ( int qpos[], int noq, int qno);
#define SAFE 1
#define UNSAFE 0
int isSafe ( int qpos[], int noq, int qno, int pos);
void printBoard ( int qpos[], int noq)
{
    int r;
    int c;
    for( r =0; r < noq; r += 1 , printf("\n"))
    {
        for( c =0; c < noq; c+= 1)
        {
            printf("%c ", qpos[r]==c?'Q':'-');
        }
    }
}
int main()
{


    n_queen_solver( 24 );

    return EXIT_SUCCESS;
}
void n_queen_solver ( int noq ) // number of queens
{
    int qpos[ noq ];
    int qpos_ind;
    for(qpos_ind =0 ; qpos_ind < noq ; qpos_ind += 1)
       qpos [ qpos_ind ] = -1;
    n_queen_solver_helper( qpos , noq , 0);

}
void n_queen_solver_helper ( int qpos[], int noq, int qno)
{
    static int solCtr;
    if ( noq == qno )
    {
        solCtr += 1;
        printf("Solution for %d Queens - Solution #%d\n", noq, solCtr);

        printBoard(qpos, noq);
        printf("\n");
        getchar();

    }
    // enumerate all the choices - 0  to noq-1
    int pos;
    for( pos = 0; pos < noq; pos += 1)
    {
        if ( isSafe(qpos, noq, qno, pos ) == SAFE)
        {
            qpos [ qno ] = pos;
            n_queen_solver_helper ( qpos, noq, qno + 1);
            qpos [ qno ] = -1;
        }
    }
}
int isSafe ( int qpos[], int noq, int qno, int pos)
{
    int r;
    int c;

    // left diag
    for( r = qno -1, c = pos - 1; r >= 0 && c >= 0; r-=1, c-=1)
    {
        if ( qpos [ r ] == c)
            return UNSAFE;
    }
    // top
    for( r = qno - 1, c = pos; r >= 0 ; r-=1)
    {
        if ( qpos [ r ] == c)
            return UNSAFE;
    }
    // right diag
    for( r = qno - 1, c = pos + 1; r >= 0 && c < noq; r-=1, c+=1)
        {
        if ( qpos [ r ] == c)
            return UNSAFE;
    }
    return SAFE;
}
