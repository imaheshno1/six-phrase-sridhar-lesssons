/*

*
**
***
****
*****
******
*******
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int row;
    int col;
    scanf ( "%d", &n);
    for( row = 1; row <= n ; row +=1, printf("\n"))
    {
        for( col = 0; col < row ; col +=1 )
        {
            printf("%d", row);
        }
    }


        return EXIT_SUCCESS;
}
