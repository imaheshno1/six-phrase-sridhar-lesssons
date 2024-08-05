/*

*
**
***
****
*****
******
*******
1
10
101
1010
10101
101010
1010101
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
        for( col = 1; col <= row ; col +=1 )
        {
            printf("%d", col);
        }
    }


        return EXIT_SUCCESS;
}
